##
## EPITECH PROJECT, 2018
## generator : makefile
## File description:
## makefile
##

NAME	=	generator

SRC_DIR	=	sources/

SOURCES	=\
	$(SRC_DIR)main.c\
	$(SRC_DIR)check_params.c\
	$(SRC_DIR)create_maze.c\
	$(SRC_DIR)display_maze.c\
	$(SRC_DIR)get_infos.c\
	$(SRC_DIR)is_pos_nbr.c\
	$(SRC_DIR)my_allocs.c\
	$(SRC_DIR)rng.c\
	$(SRC_DIR)shuffle_maze.c\
	$(SRC_DIR)carve_to_imperfection.c\

OBJ	=	$(SOURCES:%.c=%.o)

CFLAGS	=	-I include -W -Wall -Wextra -Werror -O3

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
