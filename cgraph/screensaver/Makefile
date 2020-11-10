##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME 	=	my_screensaver

SRC_DIR	=	./sources/

SRC_ANI	=	./sources/animations/

SRC	=\
	$(SRC_DIR)main.c\
	$(SRC_DIR)stuff.c\
	$(SRC_DIR)displayers.c\
	$(SRC_DIR)colors.c\
	$(SRC_DIR)new_colors.c\
	$(SRC_DIR)quit_window.c\
	$(SRC_DIR)framebuffer.c\
	$(SRC_DIR)setters_disp.c\
	$(SRC_DIR)print_main.c\
	$(SRC_ANI)ball.c\
	$(SRC_ANI)hoop.c\
	$(SRC_ANI)crescent.c\
	$(SRC_ANI)roll.c\
	$(SRC_ANI)/roll_use/roll_tmps.c\
	$(SRC_ANI)spectrum.c\
	$(SRC_ANI)fill_screen.c\
	$(SRC_ANI)drops.c\
	$(SRC_ANI)dancing_guy.c\
	$(SRC_ANI)/dancing_use/dance_tmps.c\
	$(SRC_ANI)/balls_use/move_balls.c\
	$(SRC_ANI)exp_rect.c\
	$(SRC_ANI)equalizers.c\
	$(SRC_ANI)/equalizers_use/set_beats1to5.c\
	$(SRC_ANI)/equalizers_use/set_beats5p.c\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=\
	-Wall\
	-Werror\
	-I./include/\
	-L./lib/\
	-lmy\
	-l c_graph_prog\
	-lm\

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS)
		rm -f $(OBJ)

clean:
		make clean -C lib/my/
		rm -f $(OBJ)

fclean:		clean
		make fclean -C lib/my/
		rm -f $(NAME)

re:		fclean all
