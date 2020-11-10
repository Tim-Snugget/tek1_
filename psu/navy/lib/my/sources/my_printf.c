/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** reproduces the printf function
*/

#include "printf.h"

int my_printf(char const *str, ...)
{
	va_list ap;
	count_t count;

	va_start(ap, str);
	init_count(&count);
	if (check_modulo(str, &count) == 0)
		return (0);
	get_syntax(str, ap, &count);
	va_end(ap);
	return (0);
}
