/*
** EPITECH PROJECT, 2017
** print_int
** File description:
** ...
*/

#include "printf.h"

int print_int(va_list ap, count_t *count)
{
	int nbr = va_arg(ap, int);

	if (count->plus == 1 && nbr > 0)
		my_putchar('+');
	if (count->space == 1 && count->plus == 0 && nbr > 0)
		my_putchar(' ');
	my_putnbr(nbr);
	count->type = 1;
	return (++count->i);
}
