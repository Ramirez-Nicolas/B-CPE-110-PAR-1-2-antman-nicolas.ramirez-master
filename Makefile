SRC =	 str_to_word_array.c \
	 main.c 

OBJ = $(SRC:.c=.o)

NAME = antman


all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -W -Wall -Wextra -Werror

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

rm : fclean all

.PHONY: all clean fclean re
