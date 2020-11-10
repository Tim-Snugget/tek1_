/*
** EPITECH PROJECT, 2017
** printf : print_octal
** File description:
** print octal base
*/

#include "printf.h"

int print_octal(va_list ap, count_t *count)
{
	if (count->hash == 1)
		my_putchar('0');
	my_putnbr_base(va_arg(ap, int), "01234567");
	count->type = 1;
	return (++count->i);
}
