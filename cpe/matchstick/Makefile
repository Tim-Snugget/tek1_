##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

NAME	=	matchstick

SRC_DIR	=	$(realpath sources)

SRC	=\
	$(SRC_DIR)/main.c\
	$(SRC_DIR)/analyze_map.c\
	$(SRC_DIR)/disp_map.c\
	$(SRC_DIR)/game_play.c\
	$(SRC_DIR)/get_map.c\
	$(SRC_DIR)/minor_functions.c\
	$(SRC_DIR)/do_turns.c\
	$(SRC_DIR)/parsing_fctns.c\
	$(SRC_DIR)/ai_brain/think_ai.c\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=\
	-W\
	-Wall\
	-Wextra\
	-Werror\
	-Iinclude\
	-g\

LDFLAGS	=\
	-Llib\
	-lmy\

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
