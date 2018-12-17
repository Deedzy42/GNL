/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:35:10 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 21:18:27 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dest, size_t len)
{
	size_t i;
	size_t c;
 
	i = 0;
	c = 0;
	if (*dest == '\0')
		return ((char *)src);
	while (src[i] && i < len)
	{
		c = 0;
		if (src[i] == dest[c])
		{
			while (src[i + c] == dest[c] && (i + c) < len)
			{
				if (dest[c + 1] == '\0')
						return ((char *)src + i);
				c++;
			}
		}
		i++;
	}
	return (NULL);
}
