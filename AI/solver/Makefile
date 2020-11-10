##
## EPITECH PROJECT, 2018
## solver : makefile
## File description:
## makefile
##

NAME	=	solver

SRC_DIR	=	src/

SOURCES	=	$(SRC_DIR)main.c		\
		$(SRC_DIR)check_params.c	\
		$(SRC_DIR)parse_file.c		\
		$(SRC_DIR)explore.c		\
		$(SRC_DIR)laby_handling_fcts.c	\

OBJ	=	$(SOURCES:%.c=%.o)

CFLAGS	=	-I include -W -Wall -Wextra -Wshadow -O3

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)
clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

debug:		CFLAGS += -g
debug:		re
