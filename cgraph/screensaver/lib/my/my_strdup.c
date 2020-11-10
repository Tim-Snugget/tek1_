/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** duplicate a const string and returns it
*/

#include "my.h"

char *my_strdup(char const *str)
{
	char *res = malloc(sizeof(char) * my_strlen(str));

	for (int i = 0; str[i]; i++)
		res[i] = str[i];
	return (res);
}
