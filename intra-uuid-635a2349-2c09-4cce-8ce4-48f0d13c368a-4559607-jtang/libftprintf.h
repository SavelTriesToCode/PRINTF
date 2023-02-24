/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtang <jtang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:17:56 by jtang             #+#    #+#             */
/*   Updated: 2023/02/10 16:25:02 by jtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include "libftprintf.h"

int	ft_printf(const char *s, ...);
int	printfc(int c);
int	printfd(int n);
int	printfprcent(void);
int	printfs(char *s);
int	printfu(unsigned int nb);
int	printfxlow(unsigned int n);
int	printfxup(unsigned int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	printfp(unsigned long long p);
#endif
