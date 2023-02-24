/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:10:03 by jtang             #+#    #+#             */
/*   Updated: 2023/01/27 20:21:32 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_sort(char c, va_list e)
{
	int	size;

	size = 0;
	if (c == 'c')
		size = printfc(va_arg(e, int));
	else if (c == 'd' || c == 'i')
		size = printfd(va_arg(e, int));
	else if (c == 's')
		size = printfs(va_arg(e, char *));
	else if (c == '%')
		size = printfprcent();
	else if (c == 'u')
		size = printfu(va_arg(e, unsigned int));
	else if (c == 'x')
		size = printfxlow(va_arg(e, int));
	else if (c == 'X')
		size = printfxup(va_arg(e, int));
	else if (c == 'p')
		return (printfp(va_arg(e, unsigned long long)));
	return (size);
}

int	ft_printf(const char *s, ...)
{
	int		size;
	va_list	e;

	size = 0;
	va_start(e, s);
	while (*s)
	{
		if (*s == '%' && *(s + 1))
		{
			s++;
			size += (ft_sort(*s, e));
		}
		else
		{
			ft_putchar(*s);
			size++;
		}
		s++;
	}
	va_end(e);
	return (size);
}
	// if (ft_strlen(machin) != counter)
	// 	return (-1);
	// else if (ft_strlen(machin) == counter)
	// 	return (counter);