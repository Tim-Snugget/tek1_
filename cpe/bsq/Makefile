##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=\
	sources/bsq.c	\
	sources/bsq_spe.c	\
	sources/main.c	\
	sources/square_checker.c	\
	sources/tab.c	\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=\
	-I ./include\
	-L./lib\
	-lmy\
	-lcurses\
	-g\

NAME	=	bsq

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS)
		rm $(OBJ)

clean:
		make clean -C lib/my/
		rm -rf $(OBJ)

fclean:		clean
		make fclean -C lib/my/
		rm -f $(NAME)

re:		fclean all
