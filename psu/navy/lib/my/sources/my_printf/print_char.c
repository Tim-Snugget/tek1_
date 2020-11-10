/*
** EPITECH PROJECT, 2017
** print_char
** File description:
** print a character
*/

#include "printf.h"

int print_char(va_list ap, count_t *count)
{
	my_putchar(va_arg(ap, int));
	count->type = 1;
	return (++count->i);
}
