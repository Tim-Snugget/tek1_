/*
** EPITECH PROJECT, 2017
** get_syntax
** File description:
** get the order syntax
*/

#include "printf.h"

int get_syntax(char const *str, va_list ap, count_t *count)
{
	while (str[count->i] != '\0') {
		if (count_modulo_in_str(str, count) == 1)
			show_before_modulo(str, count);
		else
			disp_end_str(str, count);
		parameter(str, count);
		flags(str, ap, count);
		type(str, ap, count);
	}
}
