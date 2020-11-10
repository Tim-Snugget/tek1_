##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## unit tests makefile
##

NAME	=	unit_tests

SRC_DIR	=	$(realpath ../sources)

S_D_BI	=	$(realpath ../sources/built_in)

TESTS_D	=	$(realpath ./tests_files)

SRC	=\
	$(SRC_DIR)/check_binaries.c\
	$(SRC_DIR)/exec_instruction.c\
	$(SRC_DIR)/instruction.c\
	$(SRC_DIR)/prompt.c\
	$(S_D_BI)/cd.c\
	$(S_D_BI)/exit.c\
	$(S_D_BI)/my_env_fctns.c\
	$(S_D_BI)/setenv.c\
	$(S_D_BI)/unsetenv.c\
	$(TESTS_D)/check_arg_validity_to_setenv.c\
	$(TESTS_D)/cut_current_dir_tests.c\
	$(TESTS_D)/is_built_in_tests.c\
	$(TESTS_D)/little_tests.c\
	$(TESTS_D)/my_empty_line_tests.c\
	$(TESTS_D)/prompt_tests.c\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=\
	-W\
	-Wall\
	-Wextra\
	-Werror\
	-I../include\
	--coverage\

LDFLAGS	=\
	-L../lib\
	-lmy\
	-lcriterion\
	-lgcov\

RM	=	rm -f

CC	=	cc

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ../lib/my
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

gclean:
		$(RM) *.gc* $(SRC_DIR)/*.gc* $(S_D_BI)/*.gc* $(TESTS_D)/*.gc*

clean:		gclean
		make clean -C ../lib/my
		$(RM) $(OBJ)

fclean:		clean
		make fclean -C ../lib/my
		$(RM) $(NAME)

re:		fclean all

run:		re ./$(NAME)
