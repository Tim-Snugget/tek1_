/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** duplicate a string to a pointer with the given string
*/

#include "my.h"

char *my_strdup(char *str)
{
	char *s;

	if (!str)
		return (NULL);
	s = my_malloc(my_strlen(str) + 1);
	for (int i = 0; str[i]; i++)
		s[i] = str[i];
	s[my_strlen(str)] = '\0';
	return (s);
}
