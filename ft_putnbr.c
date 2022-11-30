/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:58:25 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/29 23:46:38 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int			digit;
	int			res;
	long int	nb;

	nb = n;
	res = 0;
	if (nb < 0)
	{
		nb = -nb;
		res += ft_putchar('-');
	}
	if (nb < 10)
		res += ft_putchar(nb + 48);
	else
	{
		digit = nb % 10;
		nb /= 10;
		res += ft_putnbr(nb);
		res += ft_putchar(digit + 48);
	}
	return (res);
}

int	ft_unsignednbr(unsigned int nb)
{
	int			digit;
	int			res;

	res = 0;
	if (nb < 10)
		res += ft_putchar(nb + 48);
	else
	{
		digit = nb % 10;
		nb /= 10;
		res += ft_putnbr(nb);
		res += ft_putchar(digit + 48);
	}
	return (res);
}
