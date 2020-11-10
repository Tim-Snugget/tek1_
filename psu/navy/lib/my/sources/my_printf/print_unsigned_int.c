/*
** EPITECH PROJECT, 2017
** print_unsigned_int
** File description:
** ...
*/

#include "printf.h"

int print_unsigned_int(va_list ap, count_t *count)
{
	my_putnbr_unsigned(va_arg(ap, unsigned int));
	count->type = 1;
	return (++count->i);
}
