/*
** EPITECH PROJECT, 2018
** my_empty_line.c
** File description:
** returns true if the line is full of separators or so
*/

#include "my.h"

bool my_empty_line(char *str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\v' &&
		str[i] != '\n')
			return (false);
	return (true);
}
