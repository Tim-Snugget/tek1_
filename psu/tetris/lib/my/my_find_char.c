/*
** EPITECH PROJECT, 2018
** my_find_char;c
** File description:
** find a char into a str
*/

#include "my.h"

int my_find_char(char *str, char c)
{
	if (!str)
		return (-1);
	for (int i = 0; str[i]; i++)
		if (str[i] == c)
			return (i);
	return (-1);
}
