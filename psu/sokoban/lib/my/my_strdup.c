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

char *my_strndup(char *str, int n)
{
	char *s;

	if (!str || n <= 0)
		return (NULL);
	if (n >= my_strlen(str))
		return (my_strdup(str));
	s = my_malloc(sizeof(char) * (n + 1));
	my_memset(s, '\0', sizeof(char) * (n + 1));
	for (int i = 0; i < n; i++)
		s[i] = str[i];
	return (s);
}
