/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:13:02 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/29 15:21:13 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nb)
{
	int		res;
	char	*base;

	res = 0;
	base = "0123456789abcdef";
	if (nb < 16)
		res += write(1, &base[nb], 1);
	else
	{
		res += ft_putnbr_hex(nb / 16);
		res += ft_putnbr_hex(nb % 16);
	}
	return (res);
}

int	ft_putnbr_hex_call(unsigned int nb, int *index)
{
	(*index) += 2;
	return (ft_putnbr_hex(nb));
}

int	ft_putnbr_hexa(unsigned int nb)
{
	int		res;
	char	*base;

	res = 0;
	base = "0123456789ABCDEF";
	if (nb < 16)
		res += write(1, &base[nb], 1);
	else
	{
		res += ft_putnbr_hexa(nb / 16);
		res += ft_putnbr_hexa(nb % 16);
	}
	return (res);
}

int	ft_putnbr_hexa_call(unsigned int nb, int *index)
{
	(*index) += 2;
	return (ft_putnbr_hexa(nb));
}
