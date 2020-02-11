##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	main.c\
		eval_expr.c\
		infinadd.c\
		substraction.c\
		opration_to_tab.c\
		calcul.c\
		opration/operator.c\
		free.c\

NAME 	=	eval_expr

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -o

INC	=	-I./include

CFLAGS	=	-g -g3 -W -Wall -Wextra -L./lib/my/ -lmy

all:		$(NAME)

$(NAME):	$(SRC)
		make -C lib/my/
		$(CC)	$(NAME) $(SRC) $(CFLAGS) $(INC)

clean:
		rm -rf	$(OBJ)
		make -C lib/my clean

fclean:		clean
		rm -f	$(NAME)
		make -C lib/my fclean

re:		fclean all

.PHONY:	all clean fclean re
