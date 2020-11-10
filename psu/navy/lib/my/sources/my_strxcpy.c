/*
** EPITECH PROJECT, 2018
** lib : my_strxcpy
** File description:
** copies a string into another from the x-th character
*/

#include "my.h"

char *my_strxcpy(char *dest, char *src, int x)
{
	int src_len = my_strlen(src);

	dest = malloc(sizeof(char) * (src_len - x + 1));
	if (dest == NULL)
		return (NULL);
	for (int i = 0; x != src_len; i++) {
		dest[i] = src[x];
		x++;
	}
	return (dest);
}
