/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:33:01 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 16:41:32 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	i = ft_strlen(dest);
	while (n-- && src[c])
		dest[i++] = src[c++];
	dest[i] = '\0';
	return (dest);
}
