/*
** EPITECH PROJECT, 2018
** my lib
** File description:
** count the nbr of the occurence of the given char into the given string
*/

#include "ms.h"

int count_char(char *str, char c)
{
	int cnt = 0;

	for (int i = 0; str[i]; i++)
		if (str[i] == c)
			cnt++;
	return (cnt);
}
