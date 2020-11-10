/*
** EPITECH PROJECT, 2017
** printf : print_hexa_lower
** File description:
** print hexa
*/

#include "printf.h"

int print_hexa_lower(va_list ap, count_t *count)
{
	if (count->hash == 1)
		my_putstr("0x");
	my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	count->type = 1;
	return (++count->i);
}
