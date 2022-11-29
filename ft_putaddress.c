/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:03:22 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/29 17:02:43 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress_aux(unsigned long int nb)
{
	int		res;
	char	*base;

	res = 0;
	base = "0123456789abcdef";
	if (nb < 16)
		res += write(1, &base[nb], 1);
	else
	{
		res += ft_putaddress_aux(nb / 16);
		res += ft_putaddress_aux(nb % 16);
	}
	return (res);
}

int	ft_putaddress(unsigned long int n, int *index)
{
	(*index) += 2;
	if (n)
		return (write(1, "0x", 2) + ft_putaddress_aux(n));
	else
		return (write(1, "(nil)", 5));
}
