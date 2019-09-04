NAME = ft_display_file

SOURCES = srcs/*c 

OBJ = display_file.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCES) -I srcs
	gcc -o $(NAME) $(OBJ)
	chmod +x $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(OBJ) $(NAME)

re: fclean all
