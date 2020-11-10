/*
** EPITECH PROJECT, 2017
** my_str_isnum.c
** File description:
** returns 1 if the given string contain only number
*/

#include "my.h"

int my_str_isnum(char const *str)
{
	for (int x = 0; str[x]; x++)
		if (str[x] > '9' || str[x] < '0')
			return (0);
	return (1);
}
