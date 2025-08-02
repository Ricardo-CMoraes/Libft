NAME = a.out
CC = gcc
SRC	= test_compare.c

OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: 

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

test_compare:
	cc test_compare.c /nfs/homes/rida-cos/Projetos/Libft/libft.a -ILibft -o test_compare && ./test_compare && rm -f test_compare

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME) $(OBJ) test_compare
re:	fclean all
