/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** aoiehae
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int length;
	int i = 0;

	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0') {
		dest[length] = src[i];
		i++;
		length++;
	}
	return (dest);
}
