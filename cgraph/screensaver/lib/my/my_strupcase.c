/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** put every char of a string in the uppercase
*/

#include "my.h"

char *my_strupcase(char *str)
{
	for (int x = 0; str[x]; x++)
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
	return (str);
}
