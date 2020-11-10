/*
** EPITECH PROJECT, 2017
** show_before_modulo.c
** File description:
** need a put_nbr_base
*/

#include "printf.h"

int show_before_modulo(char const *str, count_t *count)
{
	init_params(count);
	while (str[count->i] != '%' && str[count->i] != '\0') {
		my_putchar(str[count->i]);
		count->i++;
	}
	return (++count->i);
}
