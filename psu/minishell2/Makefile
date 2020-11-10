##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile of the mysh
##

NAME	=	mysh

SRC_DIR	=	$(realpath sources)/

SRC_B_I	=	$(realpath sources/built_in)/

SRC_MSL	=	$(realpath sources/ms_lib)/

SRC_RED	=	$(realpath sources/redirections)/

SRC	=\
	$(SRC_B_I)cd.c\
	$(SRC_B_I)cd_error.c\
	$(SRC_B_I)exit.c\
	$(SRC_B_I)my_env_fctns.c\
	$(SRC_B_I)setenv.c\
	$(SRC_B_I)unsetenv.c\
	$(SRC_DIR)check_binaries.c\
	$(SRC_DIR)check_existence.c\
	$(SRC_DIR)exec_instruction.c\
	$(SRC_DIR)instruction.c\
	$(SRC_DIR)linked_list_fcts.c\
	$(SRC_DIR)main.c\
	$(SRC_MSL)count_char.c\
	$(SRC_MSL)my_super_tab.c\
	$(SRC_MSL)pipes_lib.c\
	$(SRC_MSL)returns.c\
	$(SRC_DIR)pipes_handling.c\
	$(SRC_DIR)prompt.c\
	$(SRC_DIR)redirect_instructions.c\
	$(SRC_RED)append_stdout.c\
	$(SRC_RED)redirection_basics.c\
	$(SRC_RED)save_stdout.c\

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

aze:		all clean
