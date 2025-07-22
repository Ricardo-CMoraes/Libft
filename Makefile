NAME = libft.a
CC = gcc
SRC = *.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

norm: 
	norminette -R *.c *.h
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME) $(OBJ)
re:	fclean all
