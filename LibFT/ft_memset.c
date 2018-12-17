/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:14:02 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/10 18:54:27 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str = (unsigned char)c;
		str++;
	}
	return (s);
}
