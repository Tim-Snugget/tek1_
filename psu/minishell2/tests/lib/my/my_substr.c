/*
** EPITECH PROJECT, 2018
** my_substr.c
** File description:
** returns a *char starting from the start char for a nb size
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void check_substr(char *str, int start, int nb_char)
{
	int len;

	if (!str)
		my_xerror("my_substr:  str has a NULL value");
	len = my_strlen(str);
	if (start > len)
		my_xerror("my_substr:  start is longer than str length");
	if (start + nb_char > len) {
		my_print_err("Error:  my_substr:  start + nb_char is longer");
		my_print_err(" than str length\n");
		exit(84);
	}
}

char *my_substr(char *str, int start, int nb_char)
{
	char *s;

	check_substr(str, start, nb_char);
	s = my_malloc(nb_char + 1);
	for (int i = 0; i < nb_char; i++)
		s[i] = str[start + i];
	s[nb_char] = '\0';
	return (s);
}
