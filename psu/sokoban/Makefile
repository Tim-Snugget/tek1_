##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for the rb_sokoban
##

NAME	=	my_sokoban

SRC_DIR	=	$(realpath ./sources)

SRC_DIR_P	=	$(realpath ./sources/parsing)

SRC_DIR_G	=	$(realpath ./sources/game)

SRC_DIR_LF	=	$(realpath ./sources/little_functions)

SOURCES	=\
	$(SRC_DIR_G)/display_map.c\
	$(SRC_DIR_G)/do_action.c\
	$(SRC_DIR_G)/end_lost_condition.c\
	$(SRC_DIR_G)/init_game_window.c\
	$(SRC_DIR_G)/is_game_finished.c\
	$(SRC_DIR_G)/play_game.c\
	$(SRC_DIR)/get_game_infos.c\
	$(SRC_DIR)/get_map.c\
	$(SRC_DIR_LF)/count_slots.c\
	$(SRC_DIR_LF)/my_open.c\
	$(SRC_DIR)/main.c\
	$(SRC_DIR_P)/check_crate.c\
	$(SRC_DIR_P)/parse_box_n_slots.c\
	$(SRC_DIR_P)/parse_char.c\
	$(SRC_DIR_P)/parse_map.c\
	$(SRC_DIR_P)/parse_player.c\
	$(SRC_DIR)/print_help.c\
	$(SRC_DIR)/reset_fcts.c\

OBJ	=	$(SOURCES:%.c=%.o)

CFLAGS	=\
	-W\
	-Wextra\
	-Wall\
	-Iinclude\

LDFLAGS	=\
	-Llib\
	-lmy\
	-lncurses\

CC	=	gcc

RM	=	rm -f

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
