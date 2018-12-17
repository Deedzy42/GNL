/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:13:56 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 21:21:54 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst))
	{
		ft_lstdel(&((*alst)->next), del);
		ft_lstdelone(alst, del);
	}
}
