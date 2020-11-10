/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** return a copy of the string given as argument
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
	int x = 0;

	while (src[x]) {
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
