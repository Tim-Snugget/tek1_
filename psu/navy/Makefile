##
## EPITECH PROJECT, 2017
## my_exec : Makefile
## File description:
## Makefile 
##

NAME	=	navy

SOURCE	=	sources/

SOURCES	=	$(SOURCE)main.c			\
		$(SOURCE)check_fcts.c		\
		$(SOURCE)open_and_parse_map.c	\
		$(SOURCE)get_map.c		\
		$(SOURCE)display_usage.c	\
		$(SOURCE)first_player.c		\
		$(SOURCE)second_player.c	\
		$(SOURCE)map_functions.c	\
		$(SOURCE)print_map.c		\
		$(SOURCE)loop_game_fp.c		\
		$(SOURCE)attack_and_defend.c	\
		$(SOURCE)loop_game_sp.c		\
		$(SOURCE)position.c		\
		$(SOURCE)recieved_torpedo.c	\
		$(SOURCE)deca_to_int_navy.c	\
		$(SOURCE)torpedo.c

OBJS	=	$(SOURCES:%.c=%.o)

LIB	= 	lib/my/libmy.a

INCLUDE	=	-I./include/ -I./lib/my/include

CFLAGS	=	$(INCLUDE) -W -Wall -Wextra

LDFLAGS	=	-L./lib/my/ -lmy

all:		$(NAME)

$(LIB):
		make -C lib/my/

$(NAME):	$(OBJS) $(LIB)
		gcc -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
		make clean -C lib/my
		$(RM) $(OBJS)

fclean:		clean
		make fclean -C lib/my
		$(RM) $(NAME)

re:		fclean all
