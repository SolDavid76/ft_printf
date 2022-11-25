/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:31:42 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/25 14:57:15 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == 'c')
			i += ft_putchar(va_arg(args, int));
		else if (str[i] == '%' && str[i + 1] == 's')
			i += ft_putstr(va_arg(args, char *));
//		else if (str[i] == '%' && str[i + 1] == 'p')
//			i += ft_putaddress(va_arg(args, unsigned int));
		else if (str[i] == '%' && str[i + 1] == 'd')
			i += ft_putnbr(va_arg(args, int));
		else if (str[i] == '%' && str[i + 1] == 'i')
			i += ft_putnbr(va_arg(args, int));
		else if (str[i] == '%' && str[i + 1] == 'u')
			i += ft_putnbr(va_arg(args, unsigned int));
		else if (str[i] == '%' && str[i + 1] == 'x')
			i += ft_putnbr_hex(va_arg(args, int));
		else if (str[i] == '%' && str[i + 1] == 'X')
			i += ft_putnbr_hexa(va_arg(args, int));
		else if (str[i] == '%' && str[i + 1] == '%')
			i += ft_putchar('%');
		else
			write(1, &(str[i]), 1);
		i++;
	}
	va_end(args);
	return (i);
}

/*#include <stdio.h>
int	main(int ac, char **av)
{
	if (printf("lib printf = %s ", av[1]))
		ft_printf("and ft_printf = %s\n", av[1]);
	return (0);
}*/
