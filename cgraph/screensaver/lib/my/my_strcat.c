/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** concatenates two given strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int len = my_strlen(dest);
	int i = 0;

	while (src[i]) {
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
