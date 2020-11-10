##
## EPITECH PROJECT, 2018
## lemin
## File description:
## makefile
##

NAME	=	lem_in

SRC_DIR	=	$(realpath sources)/

SRC_PAR	=	$(realpath sources/parsing)/

SOURCES	=\
	$(SRC_DIR)attribute_room_types.c\
	$(SRC_DIR)get_nodes.c\
	$(SRC_DIR)get_params.c\
	$(SRC_DIR)get_rooms.c\
	$(SRC_DIR)get_x_room_node.c\
	$(SRC_DIR)lem_in_lib.c\
	$(SRC_DIR)little_fcts.c\
	$(SRC_DIR)main.c\
	$(SRC_PAR)check_rooms.c\
	$(SRC_PAR)parse_fcts.c\
	$(SRC_PAR)verify_rooms.c\

OBJ	=	$(SOURCES:%.c=%.o)

CFLAGS	=\
	-W\
	-Wall\
	-Wextra\
	-Werror\
	-Iinclude\

LDFLAGS	=\
	-Llib\
	-lmy\

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		make clean -C lib/my
		$(RM) $(OBJ)

fclean:		clean
		make fclean -C lib/my
		$(RM) $(NAME)

re:		fclean all

ndo:		all clean
