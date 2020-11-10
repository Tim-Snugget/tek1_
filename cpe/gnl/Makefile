


NAME	=	aze

SRC	=\
	main.c\
	get_next_line.c\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=\
	-I.\
	-Wall\
	-Wextra\
	-g\

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
