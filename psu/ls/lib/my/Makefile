##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

NAME	=	libmy.a

SRC	=	my_getnbr.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strlen.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I ../../include

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -c $(SRC) $(CFLAGS)
		ar rc $(NAME) $(OBJ)
		rm $(OBJ)
		mv $(NAME) ../

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f ../$(NAME)

re:		fclean all
