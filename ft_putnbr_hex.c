/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:13:02 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/28 11:47:22 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(int n)
{
	char		*base;
	long int	nb;

	nb = n;
	base = "0123456789abcdef";
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb <= 16)
		write(1, &base[nb], 1);
	else
	{
		ft_putnbr_hex(nb / 16);
		ft_putnbr_hex(nb % 16);
	}
	return (1);
}

int	ft_putnbr_hexa(int n)
{
	char		*base;
	long int	nb;

	nb = n;
	base = "0123456789ABCDEF";
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb <= 16)
		write(1, &base[nb], 1);
	else
	{
		ft_putnbr_hexa(nb / 16);
		ft_putnbr_hexa(nb % 16);
	}
	return (1);
}
