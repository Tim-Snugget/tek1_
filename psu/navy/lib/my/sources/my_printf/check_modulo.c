/*
** EPITECH PROJECT, 2017
** check_modulo
** File description:
** check if there is any modulo
*/

#include "printf.h"

int check_modulo(char const *str, count_t *count)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == '%')
			count->modulo++;
	if (count->modulo == 0) {
		for (int i = 0; str[i] != '\0'; i++)
			my_putchar(str[i]);
		return (0);
	}
}
