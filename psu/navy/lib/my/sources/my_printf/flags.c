/*
** EPITECH PROJECT, 2017
** flags
** File description:
** %[Flags][Width][Precision][Length]type
*/

#include "printf.h"

int flags(char const *str, va_list ap, count_t *count)
{
	switch (str[count->i]) {
	case '+': count->plus = 1; count->i++; break;
	case '-': count->minus = 1; count->i++; break;
	case '#': count->hash = 1; count->i++; break;
	case ' ': count->space = 1; count->i++; break;
	case '0': count->zero = 1; count->i++; break;
	}
	return (count->i);
}
