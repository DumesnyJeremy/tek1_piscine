##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oui
##

NAME	=	my_hunter

SRC	=	src/change_pix.c \
		src/clock.c \
		src/csfml.c \
		src/sprite.c \
		src/Tex2_bird.c \

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME) :	$(OBJ)
		gcc $(SRC) -l csfml-graphics -l csfml-system -l csfml-window -g3

clean	:
		rm -f $(OBJ)

fclean  :	clean
		rm -f $(NAME)

re	:	fclean all
