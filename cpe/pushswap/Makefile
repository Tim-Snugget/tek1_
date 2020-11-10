##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## main makefile
##

SRC_DIR	=	$(realpath ./sources)

SRC	=	$(SRC_DIR)/main.c			\
		$(SRC_DIR)/analysis/analyze_swaps.c	\
		$(SRC_DIR)/my_pushswap.c		\
		$(SRC_DIR)/subfunctions/push_a.c	\
		$(SRC_DIR)/subfunctions/push_b.c	\
		$(SRC_DIR)/subfunctions/rotates.c	\
		$(SRC_DIR)/subfunctions/r_rotates.c	\
		$(SRC_DIR)/subfunctions/swaps.c		\
		$(SRC_DIR)/useful.c			\

OBJ	=	$(SRC:.c=.o)

LIB	=	make re -C ./lib/my/

CFLAGS	=	-Wall -Wextra -I ./include/ -L ./lib/ -lmy

NAME	=	push_swap

all:		$(NAME)

$(NAME):	$(OBJ)
		$(LIB)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f ./$(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
