/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:06:47 by jtang             #+#    #+#             */
/*   Updated: 2023/01/27 20:06:50 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void	printingp(unsigned long long p)
{
	if (p >= 16)
	{
		printingp(p / 16);
		printingp(p % 16);
	}
	else if (p <= 9 && p >= 0)
		ft_putchar(p + '0');
	else if (p >= 10 && p < 16)
		ft_putchar(p + 87);
}

int	lengthp(unsigned long long p)
{
	int	size;

	size = 0;
	while (p != 0)
	{
		p /= 16;
		size++;
	}
	return (size);
}

int	printfp(unsigned long long p)
{
	int	size;

	size = ft_putstr("0x");
	if (p == 0)
	{
		ft_putchar('0');
		return (3);
	}
	else
		printingp(p);
	return (size + lengthp(p));
}
