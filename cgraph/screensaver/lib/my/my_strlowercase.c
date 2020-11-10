/*
** EPITECH PROJECT, 2017
** my_strlowercase.c
** File description:
** put every char of a string in the lower case
*/

#include "my.h"

char *my_strlowercase(char *str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}
