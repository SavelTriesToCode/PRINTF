/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:16:48 by jtang             #+#    #+#             */
/*   Updated: 2023/01/20 17:31:00 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	printfs(char *s)
{
	int	size;

	size = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (*s)
	{
		ft_putchar(*s);
		s++;
		size++;
	}
	return (size);
}
