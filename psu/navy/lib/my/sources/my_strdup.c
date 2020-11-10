/*
** EPITECH PROJECT, 2017
** LIB : my_strdup
** File description:
** my_strdup returns a malloc-ed string
*/

#include "my.h"

char *my_strdup(char const *str)
{
	char *new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
	int count = -1;

	if (new_str == NULL)
		return (NULL);
	while (++count < my_strlen(str))
		new_str[count] = str[count];
	new_str[count] = '\0';
	return (new_str);
}
