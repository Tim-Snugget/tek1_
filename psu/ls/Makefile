##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=	./sources/disp_flags.c	\
		./sources/files.c	\
		./sources/folders.c	\
		./sources/l_flags/access.c	\
		./sources/l_flags/id_infos.c	\
		./sources/l_flags/last_modifs.c	\
		./sources/l_flags/l_flags.c	\
		./sources/l_flags/loc_blocks.c	\
		./sources/l_flags/size_b.c	\
		./sources/my_ls.c	\
		./sources/main.c	\
		./sources/options.c	\

OBJ	=	$(SRC:.c=.o)

LIB	=	make re -C lib/my/

CFLAGS	=	-Wextra -Wall -I./include/ -L./lib/ -lmy

NAME	=	my_ls

all:		$(NAME)

$(NAME):	$(OBJ)
		$(LIB)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)
		rm lib/libmy.a
		rm -rf $(OBJ)
clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
