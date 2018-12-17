/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:56:35 by amoachon          #+#    #+#             */
/*   Updated: 2018/12/17 17:56:36 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     copy_line(char **line, char *str, char *clc, int c)
{
    char        *buff;
    int         i;

    if (c < BUFF_SIZE)
    {
        i = 0;
        while (clc[c + i])
            i++;
        if ((str = (char *)malloc(sizeof(*str) * i)) == NULL)
            return (-1);
        i = 0;
        while ((c + i) < BUFF_SIZE)
            str = clc[c + i++];
    }
    if ((buff = (char *)malloc(sizeof(*buff) * ft_strlen(line[1]))) == NULL)
        return (-1);
    ft_strcpy(line[1], buff);
    free(line[1]);   
    if ((line[1] = (char *)malloc(sizeof(*buff)
        * (ft_strlen(buff) + c))) == NULL)
        return (-1);
    if ((strnjoin(buff, clc, c)) == -1)
        return (-1);
    free(buff);
    free(clc);
    return (0);
}

int     strnjoin(char *buff, char *clc, int c)
{
    char        *dclc;

    if ((dclc = (char *)malloc(sizeof(*dclc) * c)) == NULL)
        return (-1);
    ft_strncp(dclc, clc, c);
    if ((buff = ft_strjoin(buff, dclc)) == NULL)
        return (-1);
    return (0);
}

int     read_line(const int fd, char *str, char **line)
{
    char        clc[BUFF_SIZE];
    int         i;
    int         c;

    free(str);
    while ((i = read(fd, clc, BUFF_SIZE)) != -1)
    {
        if (i == 0)
            return (0);
        c = 0;
        while (clc[c] && clc[c] != '\n')
            c++;
        if ((copy_line(line, str, clc, c)) == -1)
            return (-1);
        if (c < i)
            return (1);
    }
    return (-1);
}

int     get_next_line(const int fd, char **line)
{
    static char *str;
    int         c;
    char        *bufs;

    if (*str)
    {
        c = 0;
        while (str[c] && str[c] != '\n')
            c++;
        if (c < ft_strlen(str))
        {
            if ((bufs = (char *)malloc(sizeof(*bufs) * ft_strlen(str))) == NULL)
                return (-1);
            ft_strcpy(bufs, str);
            free(str);
            if ((copy_line(line, str, bufs, c)) == -1)
                return (-1);
            return (1);
        }
        else
        {
            if ((*line = (char *)malloc(sizeof(*line) * (ft_strlen(str)))) == NULL)
                return (-1);
            ft_strcpy(*line, str);
        }
    }
    return (read_line(fd, str, line));
}