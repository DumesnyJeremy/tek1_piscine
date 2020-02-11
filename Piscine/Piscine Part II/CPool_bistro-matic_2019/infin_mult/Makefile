##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oui
##

NAME    =	infin_mutl

SRC     =	src/infin_mult.c \
			src/infin_add.c \
			src/main.c \

OBJ     =	$(SRC:.c=.o)

CFLAGS  +=	-Wall -Wextra -g3

CFLAGS  +=	-I./include

LDFLAG  =	-L./lib/my -lmy

all     :	$(NAME)

$(NAME) :	$(OBJ)
		make -C lib/my
		gcc -o $(NAME) $(OBJ) $(LDFLAG)

clean	:
		make -C lib/my clean
		rm -f $(NAME)

fclean  :	clean
		make -C lib/my fclean
		rm -f $(OBJ)

re      :	fclean all
