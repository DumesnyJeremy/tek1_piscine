##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oui
##

NAME	=	rush2

SRCS	= 	counting_letter.c \
		counting_letters.c \
		my_strstr.c \
		my_strlen.c \
		main.c \
		my_putstr.c \
		my_strupcase.c \
		my_strlowcase.c \
		my_put_nbr.c \
		my_putchar.c \
		my_strlen_carac.c \

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) $(SRCS)
		gcc -o $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean:	clean

	rm -f $(NAME)

re:	fclean all
