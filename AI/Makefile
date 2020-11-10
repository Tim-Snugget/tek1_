##
## EPITECH PROJECT, 2018
## head : makefile
## File description:
## makefile
##

NAME	=	dante

all:		$(NAME)

$(NAME):
		make -C solver/
		cp solver/solver ./tournament/
		make -C generator/
		cp generator/generator ./tournament/

clean:
		make clean -C solver/
		make clean -C generator/

fclean:		clean
		make fclean -C solver/
		make fclean -C generator/
		$(RM) $(NAME)

re:		fclean all
