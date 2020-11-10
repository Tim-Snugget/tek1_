/*
** EPITECH PROJECT, 2017
** my_str_printable.c
** File description:
** returns 1 if the given strings contains printable chars
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
	for (int x = 0; str[x]; x++)
		if (str[x] < ' ' || str[x] != 127)
			return (0);
	return (1);
}
