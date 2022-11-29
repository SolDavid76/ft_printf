/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:31:42 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/29 17:05:39 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		i;
	int		res;

	va_start(args, str);
	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == 'c')
			res += ft_putchar_call(va_arg(args, int), &i);
		else if (str[i] == '%' && str[i + 1] == 's')
			res += ft_putstr(va_arg(args, char *), &i);
		else if (str[i] == '%' && str[i + 1] == 'p')
			res += ft_putaddress((unsigned long int)va_arg(args, void *), &i);
		else if (str[i] == '%' && str[i + 1] == 'd')
			res += ft_putnbr_call(va_arg(args, int), &i);
		else if (str[i] == '%' && str[i + 1] == 'i')
			res += ft_putnbr_call(va_arg(args, int), &i);
		else if (str[i] == '%' && str[i + 1] == 'u')
			res += ft_unsignednbr_call(va_arg(args, unsigned int), &i);
		else if (str[i] == '%' && str[i + 1] == 'x')
			res += ft_putnbr_hex_call(va_arg(args, unsigned int), &i);
		else if (str[i] == '%' && str[i + 1] == 'X')
			res += ft_putnbr_hexa_call(va_arg(args, unsigned int), &i);
		else if (str[i] == '%' && str[i + 1] == '%')
			res += ft_putchar_call('%', &i);
		else
			res += write(1, &(str[i++]), 1);
	}
	va_end(args);
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	ft_printf("ft_printf = %x\n", atoi(av[1]));
// 	printf("printf = %x\n", atoi(av[1]));
// 	return (0);
// }
