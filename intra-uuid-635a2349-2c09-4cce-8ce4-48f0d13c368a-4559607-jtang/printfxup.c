/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfxup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:10:27 by jtang             #+#    #+#             */
/*   Updated: 2023/01/20 17:36:59 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	printingupx(unsigned int n)
{
	if (n >= 16)
	{
		printfxup(n / 16);
		printfxup(n % 16);
	}
	else if (n <= 9 && n >= 0)
		ft_putchar(n + '0');
	else if (n >= 10 && n < 16)
	{
		ft_putchar(n + 55);
	}
}

int	printfxup(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	printingupx(n);
	while (n != 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}
