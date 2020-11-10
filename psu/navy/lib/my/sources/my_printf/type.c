/*
** EPITECH PROJECT, 2017
** type
** File description:
** 
*/

#include "printf.h"

int type(char const *str, va_list ap, count_t *count)
{
	switch (str[count->i]) {
	case 'c': return (print_char(ap, count)); break;
	case '%': return (print_modulo(count)); break;
	case 'i': return (print_int(ap, count)); break;
	case 'd': return (print_int(ap, count)); break;
	case 's': return (print_string(ap, count)); break;
	case 'u': return (print_unsigned_int(ap, count)); break;
	case 'x': return (print_hexa_lower(ap, count)); break;
	case 'X': return (print_hexa_upper(ap, count)); break;
	case 'o': return (print_octal(ap, count)); break;
	case 'b': return (print_binary(ap, count)); break;
	case 'S': return (print_non_printable_chars(ap, count)); break;
	case 'p': return (print_pointer(ap, count)); break;
	}
	if (count->type == 0) {
		my_putchar('%');
		my_putchar(str[count->i]);
		return (++count->i);
	}
}
