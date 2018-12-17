/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:51:47 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 16:56:11 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			n;
	char			*str;
	unsigned int	i;

	if (!(s) || !(f))
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	if ((str = (char *)malloc(sizeof(*str) * n + 1)) == NULL)
		return (NULL);
	str[n] = '\0';
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
