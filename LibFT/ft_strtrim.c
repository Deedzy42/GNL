/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:34:39 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 02:49:38 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int d;
	int f;

	if (!s)
		return ((char *)s);
	d = 0;
	f = ft_strlen(s) - 1;
	while ((s[d] == ' ' || s[d] == '\t' || s[d] == '\n') && s[d])
		d++;
	while ((s[f] == ' ' || s[f] == '\t' || s[f] == '\n') && s[f] && f > d)
		f--;
	return (ft_strsub(s, d, (f - d + 1)));
}
