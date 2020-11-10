/*
** EPITECH PROJECT, 2017
** my_str_isupper.c
** File description:
** returns 1 if there are only uppercase chars in the given strings
*/

#include "my.h"

int my_str_isupper(char const *str)
{
	for (int x = 0; str[x]; x++)
		if (str[x]< 'A' || str[x] > 'Z')
			return (0);
	return (1);
}
