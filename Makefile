# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjose-hi <fjose-hi@student.42porto.com     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 21:06:09 by fjose-hi          #+#    #+#              #
#    Updated: 2025/10/29 17:52:41 by fjose-hi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar_m.c ft_putstr_m.c ft_ptr.c \
      ft_putnbr_m.c ft_uns_putnbr.c ft_puthexa.c

OBJ = $(SRC:.c=.o)


all: $(NAME) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
