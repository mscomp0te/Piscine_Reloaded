# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syesseni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 19:38:28 by syesseni          #+#    #+#              #
#    Updated: 2019/09/04 19:38:29 by syesseni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c \
		  srcs/ft_swap.c srcs/ft_strcmp.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o

INCLUDES = includes

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SOURCES) -I $(INCLUDES)
	ar qc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
