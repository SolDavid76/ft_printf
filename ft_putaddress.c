/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:03:22 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/30 00:02:32 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress_aux(unsigned long int nb, char *base)
{
	int		res;

	res = 0;
	if (nb < 16)
		res += write(1, &base[nb], 1);
	else
	{
		res += ft_putaddress_aux(nb / 16, base);
		res += ft_putaddress_aux(nb % 16, base);
	}
	return (res);
}

int	ft_putaddress(unsigned long int n)
{
	if (n)
		return (write(1, "0x", 2) + ft_putaddress_aux(n, "0123456789abcdef"));
	else
		return (write(1, "(nil)", 5));
}
