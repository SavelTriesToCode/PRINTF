/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:20:00 by jtang             #+#    #+#             */
/*   Updated: 2023/01/20 17:30:42 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	printing(int n)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n > 9)
	{
		printing(n / 10);
		printing(n % 10);
	}
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
}

int	printfd(int n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	printing(n);
	if (n < 0)
	{
		size++;
	}
	while (n != 0)
	{
		n /= 10;
		size ++;
	}
	return (size);
}
