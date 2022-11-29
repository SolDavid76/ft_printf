/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <djanusz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:41:18 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/29 17:01:34 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char *str, ...);
int	ft_putchar_call(char c, int *index);
int	ft_putchar(char c);
int	ft_putstr(char *str, int *index);
int	ft_putaddress(unsigned long int n, int *i);
int	ft_putnbr_call(int n, int *index);
int	ft_putnbr(int n);
int	ft_unsignednbr_call(unsigned int nb, int *index);
int	ft_unsignednbr(unsigned int nb);
int	ft_putnbr_hex_call(unsigned int nb, int *index);
int	ft_putnbr_hex(unsigned int nb);
int	ft_putnbr_hexa_call(unsigned int nb, int *index);
int	ft_putnbr_hexa(unsigned int nb);

#endif
