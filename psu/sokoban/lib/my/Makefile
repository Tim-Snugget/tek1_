##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=	my_free_malloc.c	\
		my_getnbr.c		\
		my_memset.c		\
		my_print_err.c		\
		my_putchar.c		\
		my_putnbr.c		\
		my_strlen.c		\
		my_putstr.c		\
		my_strcat.c		\
		my_strmalcat.c		\
		my_strcmp.c		\
		my_strncmp.c		\
		my_strcpy.c		\
		my_strdup.c		\
		my_str_to_word_tab.c	\
		my_substr.c		\
		my_xerror.c		\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=\
	-I./include\
	-W\
	-Wall\
	-Wextra\
	-Werror\

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc -o $(NAME) $(OBJ)
		mv $(NAME) ../

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -f ../$(NAME)

re:		fclean all
