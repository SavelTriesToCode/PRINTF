# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtang <jtang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:08:14 by jtang             #+#    #+#              #
#    Updated: 2023/02/10 16:25:00 by jtang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=libftprintf.a
CC		=gcc
RM		=rm -rf
CCFLAGS	=-Werror -Wextra -Wall
CFILES		=printfc.c \
			printfd.c \
			printfprcent.c \
			printfs.c \
			printfu.c \
			printfp.c \
			printfxlow.c \
			printfxup.c \
			ft_printf.c \
			ft_putstr.c \
			ft_putchar.c
OFILES = $(CFILES:.c=.o)

%.o: %.c
	$(CC) $(CCFLAGS) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OFILES)
	ar rc $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re all
