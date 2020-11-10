/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** return a copy of the string given as argument
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
	int len = my_strlen(src);

	for (int i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return (dest);
}
