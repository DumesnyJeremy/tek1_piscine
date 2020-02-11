##
## EPITECH PROJECT, 2019
## Task01
## File description:
## oui
##

NAME    =       libmy.a

all:    $(NAME)

CFLAGS += -W -Wall -Wextra

$(NAME):
	gcc -c *.c
	ar rc libmy.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:     fclean all
