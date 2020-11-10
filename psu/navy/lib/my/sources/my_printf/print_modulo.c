/*
** EPITECH PROJECT, 2017
** print_modulo.c
** File description:
** ...
*/

#include "printf.h"

int print_modulo(count_t *count)
{
	my_putchar('%');
	count->type = 1;
	return (++count->i);
}
