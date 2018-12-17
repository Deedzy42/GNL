/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:37:07 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 21:17:46 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t i;

	i = 0;
	if (len == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < len - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
