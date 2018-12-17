/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:35:01 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 23:37:09 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	m;

	i = 0;
	c = 0;
	m = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] && i < size)
		i++;
	m = i;
	while (src[c] && i < size - 1)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	if (m < size)
		dest[i] = '\0';
	return (m + ft_strlen(src));
}
