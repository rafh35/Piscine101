NAME = ft_cat

SRC = ./ft_cat.c

OBJ = ./ft_cat.o

LIB = ./myft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRC) -I $(LIB)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
