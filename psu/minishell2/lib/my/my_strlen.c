/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** get the length of a given string
*/

#include "my.h"

int my_strlen(char const *str)
{
	int counter = 0;

	if (!str)
		my_xerror("my_strlen:  str has a NULL value");
	for (int i = 0; str[i]; i++)
		counter++;
	return (counter);
}
