/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:51:15 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/25 12:56:14 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_putstri(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		write(1, &str[i], 1);
	return (1);
}