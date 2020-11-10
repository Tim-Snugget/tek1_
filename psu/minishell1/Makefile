##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile of the mysh
##

NAME	=	mysh

SRC_DIR	=	$(realpath sources)

S_D_BI	=	$(realpath sources/built_in)

SRC	=\
	$(SRC_DIR)/main.c\
	$(SRC_DIR)/check_binaries.c\
	$(SRC_DIR)/exec_instruction.c\
	$(SRC_DIR)/instruction.c\
	$(SRC_DIR)/prompt.c\
	$(S_D_BI)/cd.c\
	$(S_D_BI)/cd_error.c\
	$(S_D_BI)/exit.c\
	$(S_D_BI)/setenv.c\
	$(S_D_BI)/my_env_fctns.c\
	$(S_D_BI)/unsetenv.c\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=\
	-W\
	-Wall\
	-Wextra\
	-Iinclude\

LDFLAGS	=\
	-Llib\
	-lmy\
	-lgnl\

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		make clean -C lib/my
		rm -f $(OBJ)

fclean:		clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all
