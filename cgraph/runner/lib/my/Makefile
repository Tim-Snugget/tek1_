##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lib Makefile for MyRunner
##

NAME	=	libmy.a

SRC	=\
	my_putchar.c\
	my_putstr.c\
	my_putstrb.c\
	my_putnbr.c\
	my_strcmp.c\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=	-Iinclude

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -c $(SRC) $(CFLAGS)
		ar rc -o $(NAME) $(OBJ)
		rm -f $(OBJ)
		mv $(NAME) ../

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f ../$(NAME)

re:		fclean all
