/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:55:08 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/29 01:05:04 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if ((str = (char *)malloc(sizeof(*str) * size)) == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
