##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=	my_getnbr.c		\
		my_put_nbr.c		\
		my_strlen.c		\
		my_putchar.c		\
		my_putstr.c		\
		my_strcat.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_strupcase.c		\
		my_strlowercase.c	\
		my_strcapitalize.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_sort_int_array.c	\
		my_swap.c		\
		my_strdup.c

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=	-I./include/

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -c $(SRC) $(CFLAGS)
		ar rc -o $(NAME) $(OBJ)
		rm -rf $(OBJ)
		mv $(NAME) ../

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -f ../$(NAME)

re:		fclean all
