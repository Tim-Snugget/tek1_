/*
** EPITECH PROJECT, 2017
** my_str_islower.c
** File description:
** returns 1 if there are only lowercase chars in the given string
*/

#include "my.h"

int my_str_islower(char const *str)
{
	for (int x = 0; str[x]; x++)
		if (str[x] < 'a' || str[x] > 'z')
			return (0);
	return (1);
}
