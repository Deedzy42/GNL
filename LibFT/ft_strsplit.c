/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:29:47 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:07:44 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char(const char *s, char c)
{
	if (!(*s) || *s == c)
		return (1);
	return (1 + ft_char(s + 1, c));
}

static int	ft_word(const char *s, char c)
{
	if (!(*s))
		return (0);
	if ((*s != c) && (*(s + 1) == c || *(s + 1) == '\0'))
		return (1 + ft_word(s + 1, c));
	return (0 + ft_word(s + 1, c));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!(s))
		return (NULL);
	if ((tab = (char**)malloc(sizeof(char*) * (ft_word(s, c) + 1))) == NULL)
		return (NULL);
	tab[ft_word(s, c)] = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			if ((tab[i] = (char*)malloc(sizeof(char) * ft_char(s, c))) == NULL)
				return (NULL);
			while (*s != c && *s != '\0')
				tab[i][j++] = *(s++);
			tab[i++][j] = '\0';
		}
	}
	return (tab);
}
