##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## tetris makefile
##

NAME	=	tetris

SRC_DIR	=	$(realpath ./sources)

SOURCES	=\
	$(SRC_DIR)/main.c\
	$(SRC_DIR)/init_tetris.c\
	$(SRC_DIR)/little_fcts.c\
	$(SRC_DIR)/assign_touch/last_assignement.c\
	$(SRC_DIR)/assign_touch/lrtd_keys.c\
	$(SRC_DIR)/assign_touch/pause_quit_keys.c\
	$(SRC_DIR)/assign_touch/set_game_opts.c\
	$(SRC_DIR)/check/check_commands.c\
	$(SRC_DIR)/check/check_datas.c\
	$(SRC_DIR)/check/verify_tetrimino.c\
	$(SRC_DIR)/debug/debug_fcts.c\
	$(SRC_DIR)/debug/print_debug.c\
	$(SRC_DIR)/debug/print_tet_infos.c\
	$(SRC_DIR)/debug/tet_infos.c\
	$(SRC_DIR)/fcts/get_ext.c\
	$(SRC_DIR)/fcts/my_closedir.c\
	$(SRC_DIR)/fcts/my_isalpha.c\
	$(SRC_DIR)/fcts/my_open.c\
	$(SRC_DIR)/fcts/my_perror.c\
	$(SRC_DIR)/fcts/my_sort_char_array.c\
	$(SRC_DIR)/game/get_rdm_tetri.c\
	$(SRC_DIR)/game/play_tetris.c\
	$(SRC_DIR)/game/print_colorized_header.c\
	$(SRC_DIR)/game/print_map.c\
	$(SRC_DIR)/game/set_colors.c\
	$(SRC_DIR)/game/stock_and_save_tetriminos.c\

OBJ	=	$(SOURCES:%.c=%.o)

CFLAGS	=\
	-W\
	-Wall\
	-Wextra\
	-Iinclude\
	-g\

LDFLAGS	=\
	-Llib\
	-lmy\
	-lncurses\

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
