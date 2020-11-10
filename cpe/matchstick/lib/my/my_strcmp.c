/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare the lengthes of two given strings
*/

#include "my.h"

int my_strcmp(char *s1, char *s2)
{
	int i;

	if (!s1 || !s2)
		my_puterr("str has a NULL value");
	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);
	return (s1[i] - s2[i]);
}
