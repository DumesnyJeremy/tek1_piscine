##
## EPITECH PROJECT, 2019
## bistromatic
## File description:
## makefile
##

NAME	=	calc

SRCS	=	my_list_utils1.c \
		my_list_utils3.c \
		my_list_utils2.c \
		my_evalexpr.c \
		my_list_utils4.c \
		do_op.c \
		my_list_calcul.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		my_list_calcul2.c \
		main.c \
		my_list_utils5.c \
		my_strlen.c \
		my_atoi.c \
		error.c \
		my_putnbr_base.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS = 	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS) $(SRCS)
		gcc -o $(NAME) $(OBJS)

clean:
		rm my_putnbr_base.o
		rm error.o
		rm my_atoi.o
		rm my_strlen.o
		rm my_list_utils1.o
		rm my_list_utils3.o
		rm my_list_utils2.o
		rm my_evalexpr.o
		rm my_list_utils4.o
		rm do_op.o
		rm my_list_calcul.o
		rm my_put_nbr.o
		rm my_putchar.o
		rm my_putstr.o
		rm my_list_calcul2.o
		rm main.o
		rm my_list_utils5.o

fclean:
		rm my_putnbr_base.o
		rm error.o
		rm my_atoi.o
		rm my_strlen.o
		rm my_list_utils1.o
		rm my_list_utils3.o
		rm my_list_utils2.o
		rm my_evalexpr.o
		rm my_list_utils4.o
		rm do_op.o
		rm my_list_calcul.o
		rm my_put_nbr.o
		rm my_putchar.o
		rm my_putstr.o
		rm my_list_calcul2.o
		rm main.o
		rm my_list_utils5.o
		rm $(NAME)

re: fclean all
