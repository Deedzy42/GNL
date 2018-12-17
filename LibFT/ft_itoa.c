/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:24:02 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:07:17 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_coucou(char *str, int nb, int i)
{
	i--;
	if (nb > 9)
	{
		ft_coucou(str, nb / 10, i);
		ft_coucou(str, nb % 10, ++i);
	}
	else
		str[i] = nb + 48;
}

static int	ft_size(int nb)
{
	int		i;

	i = 0;
	if (nb == 0)
		i++;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
	{
		if ((str = (char *)malloc(sizeof(*str) * 12)) == NULL)
			return (NULL);
		ft_strcpy(str, "-2147483648");
		return (str);
	}
	i = ft_size(n);
	if ((str = (char *)malloc(sizeof(*str) * i)) == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str[--i] = '\0';
	ft_coucou(str, n, i);
	return (str);
}
