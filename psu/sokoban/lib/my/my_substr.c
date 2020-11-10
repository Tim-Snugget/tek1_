/*
** EPITECH PROJECT, 2018
** my_substr.c
** File description:
** returns a *char starting from the start char for a nb size
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *my_substr(char *str, int start, int nb_char)
{
	char *s;

	if (!str || start >= my_strlen(str) ||
	start + nb_char > my_strlen(str))
		return (NULL);
	s = my_malloc(nb_char + 1);
	for (int i = 0; i < nb_char; i++)
		s[i] = str[start + i];
	s[nb_char] = '\0';
	return (s);
}
