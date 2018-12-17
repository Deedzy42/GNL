/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:14:53 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 16:42:10 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if ((str = (char *)malloc(sizeof(*str) * size + 1)) == NULL)
		return (NULL);
	ft_bzero(str, size);
	str[size] = '\0';
	return (str);
}
