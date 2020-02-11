##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	$(wildcard *.c)

NAME	=       libmy.a

OBJ	=      	$(SRC:.c=.o)

CC	=       gcc -o

CFLAGS	=	-Wall -Wextra -L. -lmy -I../../include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
clean:
	rm -rf  $(OBJ)
	rm -f	*~
	rm -f	*#
	rm -f	#*

fclean:	clean
	rm -rf  $(NAME)

re:	fclean all
