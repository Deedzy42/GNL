/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:06:59 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 16:58:59 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!(s))
		return (NULL);
	i = 0;
	if ((str = (char *)malloc(sizeof(*str) * len + 1)) == NULL)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
