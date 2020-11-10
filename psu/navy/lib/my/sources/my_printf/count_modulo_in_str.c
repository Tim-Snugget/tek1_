/*
** EPITECH PROJECT, 2017
** count_modulo_in_str
** File description:
** count how many there is in a string
*/

#include "printf.h"

int count_modulo_in_str(char const *str, count_t *count)
{
	for (int j = count->i; str[j] != '\0'; j++) {
		if (str[j] == '%')
			return (1);
	}
	return (0);
}
