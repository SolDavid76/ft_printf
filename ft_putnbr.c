/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:58:25 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/25 13:05:23 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_putnbr(int n)
{
	int			digit;
	long int	nb;

	nb = (long int)x;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10)
		write(1, &(nb + 48), 1);
	else
	{
		digit = nb % 10;
		nb /= 10;
		ft_putnbr(nb);
		write(1, &(digit + 48), 1);
	}
	return (1);
}
