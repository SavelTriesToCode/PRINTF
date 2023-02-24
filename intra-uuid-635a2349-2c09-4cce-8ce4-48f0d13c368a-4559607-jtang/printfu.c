/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:47:11 by jtang             #+#    #+#             */
/*   Updated: 2023/01/20 17:31:04 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	aprinting(unsigned int n)
{
	if (n > 9)
	{
		aprinting(n / 10);
		aprinting(n % 10);
	}
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
}

int	printfu(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	aprinting(n);
	while (n != 0)
	{
		n /= 10;
		size ++;
	}
	return (size);
}
