##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## main makefile
##

NAME	=	my_runner

SRC_DIR	=	sources/

SRC	=\
	$(SRC_DIR)main.c\
	$(SRC_DIR)movs/car_jump.c\
	$(SRC_DIR)movs/car_movs.c\
	$(SRC_DIR)initialize_runner/initialize_runner.c\
	$(SRC_DIR)initialize_runner/initialize_cars.c\
	$(SRC_DIR)initialize_runner/initialize_parallax.c\
	$(SRC_DIR)int_to_str.c\
	$(SRC_DIR)map/map.c\
	$(SRC_DIR)movs/move_parallax.c\
	$(SRC_DIR)map/parse_floor.c\
	$(SRC_DIR)map/parse_map.c\
	$(SRC_DIR)score.c\
	$(SRC_DIR)window_handling.c\

CFLAGS	=\
	-Wall\
	-Wextra\
	-Iinclude\

LDFLAGS	=\
	-l c_graph_prog\
	-L lib\
	-lmy\

OBJ	=	$(SRC:%.c=%.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)
		rm -f $(OBJ)

clean:
		make clean -C lib/my
		rm -f $(OBJ)

fclean:		clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all
