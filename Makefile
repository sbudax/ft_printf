# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/15 15:11:37 by sbxaba            #+#    #+#              #
#    Updated: 2018/08/15 15:17:00 by sbxaba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -I.

GCC = gcc -c

SRCS = *.c

OBJS = *.o

all : $(NAME)

$(NAME) :
	$(GCC) $(SRCS) $(CFLAGS)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re : fclean all
