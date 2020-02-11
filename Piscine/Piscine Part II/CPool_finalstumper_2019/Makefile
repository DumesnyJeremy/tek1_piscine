##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oui
##

NAME    =	rush31

SRC     =	rush3.c \
		main.c \

OBJ     =	$(SRC:.c=.o)

CFLAGS  +=	-Wall -Wextra

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
