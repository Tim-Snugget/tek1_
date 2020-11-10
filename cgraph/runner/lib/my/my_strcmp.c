/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** compare two strings -> -1 if s1 is smaller than s2
*/

#include "my.h"

int my_strcmp(const char *s1, const char *s2)
{
	int i;

	for (; s1[i] && s2[i] && s1[i] == s2[i]; i++);
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}
