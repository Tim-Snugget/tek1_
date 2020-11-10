/*
** EPITECH PROJECT, 2017
** print : print_non_printable_chars
** File description:
** print non printable characters in a string
*/

#include "printf.h"

int print_non_printable_chars(va_list ap, count_t *count)
{
	my_putstr_non_printable_chars(va_arg(ap, char*));
	count->type = 1;
	return (++count->i);
}

void my_putstr_non_printable_chars(char const *str)
{
	for (int count = 0; str[count] != '\0' ; count++)
		if (str[count] < 32 || str[count] >= 127) {
			my_putchar('\\');
			handle_non_printable_chars(str, count);
			my_putnbr_base(str[count], "01234567");
		} else
			my_putchar(str[count]);
}

void handle_non_printable_chars(char const *str, int count)
{
	if (str[count] <= 7)
		my_putstr("00");
	else if (str[count] >= 8  && str[count] <= 63)
		my_putchar('0');
}
