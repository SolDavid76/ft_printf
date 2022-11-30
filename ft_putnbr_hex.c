/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:13:02 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/30 01:46:18 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nb, char *base)
{
	int		res;

	res = 0;
	if (nb < 16)
		res += write(1, &base[nb], 1);
	else
	{
		res += ft_putnbr_hex(nb / 16, base);
		res += ft_putnbr_hex(nb % 16, base);
	}
	return (res);
}
