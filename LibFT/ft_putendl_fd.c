/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:57:33 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/19 13:59:25 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (*s)
	{
		write(fd, s, ft_strlen(s));
		ft_putchar_fd('\n', fd);
	}
}
