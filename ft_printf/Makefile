# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 21:06:03 by jtorreir          #+#    #+#              #
#    Updated: 2023/01/17 21:06:06 by jtorreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf ft_printf_utils\

CC= cc
RM= rm -f
CFLAGS= -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(SRC:=.o)
					ar rc $(NAME) $(SRC:=.o)
clean:
		$(RM)	$(SRC:=.o)
fclean: clean
		$(RM)	$(NAME)
re: fclean	$(NAME)