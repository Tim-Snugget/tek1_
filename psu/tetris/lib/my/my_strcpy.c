/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** return a copy of the string given as argument
*/

#include "my.h"

char *my_strcpy(char *dest, char *src)
{
	int len = my_strlen(src);

	if (dest != NULL)
		my_free(dest);
	dest = my_malloc(sizeof(char) * (len + 1));
	for (int i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return (dest);
}
