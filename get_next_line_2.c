/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:56:35 by amoachon          #+#    #+#             */
/*   Updated: 2019/01/24 16:52:34 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     ft_static(char **str, char **line)
{
	int     i;
	char    *tmp;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if ((*line = (char *)malloc(sizeof(*line) * i + 1)) == NULL)
		return (-1);
	*line = ft_strncpy(*line, *str, i);
	*line[i] = '\0';
	if (str[i] == '\n' && str[i + 1] != '\0')
	{
		if ((tmp = (char *)malloc(sizeof(tmp)
						* (ft_strlen(*str) - i))) == NULL)
			return (-1);
		tmp = ft_strcpy(tmp, *str + i + 1);
		free(*str);
		if ((*str = (char *)malloc(sizeof(*str)
						* (ft_strlen(tmp) + 1))) == NULL)
			return (-1);
		*str = ft_strcpy(*str, tmp);
		free(tmp);
		return (1);
	}
	free(*str);
	return (0);
}

int		copy_line(char **line, static char *str, char *bufs, int c)
{
	char	*tmp;
	int		i;

	i = 0;
	if (c < BUFF_SIZE && bufs[c + 1] != '\0')
	{
		i = 0;
		while (bufs[c + i])
			i++;
		if ((*str = (char *)malloc(sizeof(*str) * i)) == NULL)
			return (-1);
		i = 0;
		while ((c + i) < BUFF_SIZE && bufs[c + i + 1])
		{
			str[0][i] = bufs[c + i + 1];
			i++;
		}
	}
	if (*line)
		i = strlen(*line);
	if ((tmp = (char *)malloc(sizeof(tmp) * (i + c))) == NULL)
		return (-1);
	tmp = ft_strcpy(tmp, *line);
	free(*line);
	ft_memccpy(tpm + i, bufs, '\n', BUFF_SIZE);
	if ((*line = (char *)malloc(sizeof(*line) * (i + c))) == NULL)
		return (-1);
	*line = ft_strcpy(*line, tmp);
	free(tmp);
	return (0);
}

int 	ft_read(static char *str, const int fd, char **line)
{
	char	bufs[BUFF_SIZE];
	int 	c;
	int		i;

	while ((i = read(fd, bufs, BUFF_SIZE)) != -1)
	{
		if (i == 0)
			return (0);
		c = 0;
		while (bufs[c] && bufs[c] != '\n')
			c++;
		if ((copy_line(line, str, bufs, c)) == -1)
			return (-1);
		if (c < i)
			return (1);
	}
	return (-1);

}

int     get_next_line(const int fd, char **line)
{
	static char *str = NULL;
	int         c;
	char        *bufs;

	if (str)
	{
		if (str[0] == '\n' && str[1] == '\0')
			return (1);
		c = ft_static(str, line);
		if (c == -1)
			return (-1);
		if (c == 1)
			return (1);
	}
	return (ft_read(*str, fd, *line));
}
