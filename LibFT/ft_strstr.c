/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:54:43 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 19:52:02 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *dest)
{
	int i;
	int c;
 
	i = 0;
	c = 0;
	if (*dest == '\0')
		return ((char *)src);
	while (src[i])
	{
		c = 0;
		if (src[i] == dest[c])
		{
			while (src[i + c] == dest[c])
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
