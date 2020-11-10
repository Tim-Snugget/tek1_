/*
** EPITECH PROJECT, 2017
** print_string.c
** File description:
** print a char *
*/

#include "printf.h"

int print_string(va_list ap, count_t *count)
{
	my_putstr(va_arg(ap, char *));
	count->type = 1;
	return (++count->i);
}
