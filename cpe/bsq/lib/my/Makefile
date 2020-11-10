##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=	my_getnbr.c		\
		my_strlen.c		\
		my_putchar.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I../../include/

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -c $(SRC) $(CFLAGS)
		ar rc -o $(NAME) $(OBJ)
		mv $(NAME) ../

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f ../$(NAME)

re:		fclean all
