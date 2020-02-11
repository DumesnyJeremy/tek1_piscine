##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Day10
##

NAME	=	infin_add

SRCS	=	my_utils.c \
		main.c \
		my_infadd.c \
		lib.h \
		my_infsub.c \

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) $(SRCS)
		gcc -Wall -Werror -Wextra -o $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean:
	rm -f *.o
	rm $(NAME)
re: fclean all
