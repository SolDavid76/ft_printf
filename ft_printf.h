/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:41:18 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/28 11:42:46 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putaddress(unsigned int n);
int	ft_putnbr(int n);
int	ft_putnbr_hex(int n);
int	ft_putnbr_hexa(int n);

#endif
