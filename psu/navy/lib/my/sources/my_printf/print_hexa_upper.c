/*
** EPITECH PROJECT, 2017
** printf : print_hexa_upper
** File description:
** print hexa for upper letter
*/

#include "printf.h"

int print_hexa_upper(va_list ap, count_t *count)
{
	if (count->hash == 1)
		my_putstr("0x");
	my_putnbr_base(va_arg(ap, int), "O123456789ABCDEF");
	count->type = 1;
	return (++count->i);
}
