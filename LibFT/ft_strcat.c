/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:29:08 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 20:30:39 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[c])
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
