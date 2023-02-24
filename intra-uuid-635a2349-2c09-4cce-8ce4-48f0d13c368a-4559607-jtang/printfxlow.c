/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfxlow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:10:27 by jtang             #+#    #+#             */
/*   Updated: 2023/01/20 17:36:40 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	printinglowx(unsigned int n)
{
	if (n >= 16)
	{
		printfxlow(n / 16);
		printfxlow(n % 16);
	}
	else if (n <= 9 && n >= 0)
		ft_putchar(n + '0');
	else if (n >= 10 && n < 16)
	{
		ft_putchar(n + 87);
	}
}

int	printfxlow(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	printinglowx(n);
	while (n != 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}
