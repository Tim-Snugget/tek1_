##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile : my_printf
##

NAME	=	libmy.a

GNL	=	sources/get_next_line/

PRINTF	=	sources/my_printf/

SOURCE	=	sources/

SOURCES	=	$(SOURCE)my_printf.c			\
		$(PRINTF)init_count.c			\
		$(PRINTF)check_modulo.c			\
		$(PRINTF)get_syntax.c			\
		$(PRINTF)disp_end_str.c			\
		$(PRINTF)show_before_modulo.c		\
		$(PRINTF)init_params.c			\
		$(PRINTF)count_modulo_in_str.c		\
		$(PRINTF)parameter.c			\
		$(PRINTF)flags.c			\
		$(PRINTF)type.c				\
		$(PRINTF)print_char.c			\
		$(PRINTF)print_unsigned_int.c		\
		$(PRINTF)print_int.c			\
		$(PRINTF)print_string.c			\
		$(PRINTF)print_modulo.c			\
		$(PRINTF)print_hexa_lower.c		\
		$(PRINTF)print_hexa_upper.c		\
		$(PRINTF)print_binary.c			\
		$(PRINTF)print_pointer.c		\
		$(PRINTF)print_octal.c			\
		$(PRINTF)print_non_printable_chars.c	\
		$(SOURCE)my_getnbr.c			\
		$(SOURCE)my_putchar.c			\
		$(SOURCE)my_putnbr_base.c		\
		$(SOURCE)my_putnbr.c			\
		$(SOURCE)my_putnbr_unsigned.c		\
		$(SOURCE)my_putstr.c			\
		$(SOURCE)my_putarray.c			\
		$(SOURCE)my_strcatdup.c			\
		$(SOURCE)my_strxcpy.c			\
		$(SOURCE)my_strcmp.c			\
		$(SOURCE)my_strncmp.c			\
		$(SOURCE)my_strdup.c			\
		$(SOURCE)my_strlen.c			\
		$(SOURCE)str_to_word_array.c		\
		$(SOURCE)get_next_line.c		\
		$(SOURCE)my_free_malloc.c		\
		$(SOURCE)my_memset.c			\
		$(SOURCE)my_nanosleep.c			\

OBJS	=	$(SOURCES:%.c=%.o)

INCLUDE	=	-I./include/

CFLAGS	=	$(INCLUDE)

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
