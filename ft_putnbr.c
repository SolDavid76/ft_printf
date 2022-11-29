/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:58:25 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/29 17:01:03 by djanusz          ###   ########.fr       */
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

int	ft_putnbr_call(int n, int *index)
{
	(*index) += 2;
	return (ft_putnbr(n));
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

int	ft_unsignednbr_call(unsigned int nb, int *index)
{
	(*index) += 2;
	return (ft_unsignednbr(nb));
}
