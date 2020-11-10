/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** get the length of a given string
*/

#include "my.h"

int my_strlen(char *str)
{
	int counter = 0;

	if (!str)
		return (-1);
	for (int i = 0; str[i]; i++)
		counter++;
	return (counter);
}
