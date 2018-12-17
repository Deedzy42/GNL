/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:12:02 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:15:06 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = -1;
	if (d < s)
		while (++i < len)
			d[i] = s[i];
	else
		while (len-- > 0)
			d[len] = s[len];
	return (dest);
}
