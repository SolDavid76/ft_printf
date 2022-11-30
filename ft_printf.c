/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:31:42 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/30 01:51:13 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(char *str, va_list args, int *res, int *i)
{
	if (str[*i + 1] == 'c')
		*res += ft_putchar(va_arg(args, int));
	else if (str[*i + 1] == 's')
		*res += ft_putstr(va_arg(args, char *));
	else if (str[*i + 1] == 'p')
		*res += ft_putaddress((unsigned long int)va_arg(args, void *));
	else if (str[*i + 1] == 'd')
		*res += ft_putnbr(va_arg(args, int));
	else if (str[*i + 1] == 'i')
		*res += ft_putnbr(va_arg(args, int));
	else if (str[*i + 1] == 'u')
		*res += ft_unsignednbr(va_arg(args, unsigned int));
	else if (str[*i + 1] == 'x')
		*res += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (str[*i + 1] == 'X')
		*res += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (str[*i + 1] == '%')
		*res += ft_putchar('%');
	else
		return (0);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			i += ft_print((char *)str, args, &res, &i);
		else
			res += write(1, &(str[i]), 1);
		i++;
	}
	va_end(args);
	return (res);
}
