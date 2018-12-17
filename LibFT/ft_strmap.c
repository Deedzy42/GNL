/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:43:29 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 16:55:45 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
