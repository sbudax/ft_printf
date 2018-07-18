# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/06 10:46:50 by sbxaba            #+#    #+#              #
#    Updated: 2018/07/06 10:59:26 by sbxaba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c\
	   conv_fmt.c\
	   libft/*.c\

OBJ = ft_printf.o\
	  conv_fmt.o\
	  libft/*.o\

RM = rm -f

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all
