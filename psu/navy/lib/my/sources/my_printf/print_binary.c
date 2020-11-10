/*
** EPITECH PROJECT, 2017
** printf : print_binary
** File description:
** print binary number
*/

#include "printf.h"

int print_binary(va_list ap, count_t *count)
{
	my_putnbr_base(va_arg(ap, int), "01");
	count->type = 1;
	return (++count->i);
}
