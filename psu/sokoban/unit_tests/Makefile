##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Unit_tests Makefile
##

NAME	=	unit_tests

SRC_DIR	=	$(realpath ../sources)

SRC_DIR_PARSING	=	$(realpath ../sources/parsing)

SOURCES	=\
	$(SRC_DIR)/print_help.c\
	$(SRC_DIR)/get_map.c\
	$(SRC_DIR_PARSING)/parse_box_n_slots.c\
	$(SRC_DIR_PARSING)/parse_char.c\
	$(SRC_DIR_PARSING)/parse_map.c\
	$(SRC_DIR_PARSING)/parse_player.c\
	useful_stuff/print_tab.c\
	tests.c\

OBJ	=	$(SOURCES:%.c=%.o)

CFLAGS	=\
	-W\
	-Wall\
	-Wextra\
	-Werror\
	-I../include\
	--coverage\

LDFLAGS	=\
	-L../lib\
	-lrb\
	-lcriterion\
	-lgcov\

RM	=	rm -f

CC	=	cc

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ../lib
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

gclean:
		$(RM) *.gc* $(SRC_DIR)/*.gc* $(SRC_DIR_PARSING)/*.gc*

clean:		gclean
		make clean -C ../lib
		$(RM) $(OBJ)

fclean:		clean
		make fclean -C ../lib
		$(RM) $(NAME)

re:		fclean all
