/*
** EPITECH PROJECT, 2017
** printf : print_pointer
** File description:
** print pointer
*/

#include "printf.h"

int print_pointer(va_list ap, count_t *count)
{
	my_putstr("0x");
	my_putnbr_base(va_arg(ap, long), "0123456789abcdef");
	count->type = 1;
	return (++count->i);
}
