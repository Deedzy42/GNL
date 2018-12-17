/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:45:47 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 22:21:17 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
