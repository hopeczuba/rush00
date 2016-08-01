NAME = rush
CC = gcc
FLAGS = -Wall -Werror -Wextra -o
FILES = *.c
HEADER = "rush_0.h"
.PHONY = all clean fclean make

all : $(NAME)

$(NAME):
	$(CC) $(FILES) -I $(HEADER) $(FLAGS) $(NAME)

fclean:
	/bin/rm $(NAME)

re: fclean all
