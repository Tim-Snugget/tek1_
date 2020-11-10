/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** compares two given strings
*/

#include "my.h"

int get_strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i]; i++);
	return (s1[i] - s2[i]);
}

int my_strncmp(char *s1, char *s2, int n)
{
	if (!s1 || !s2)
		my_xerror("my_strncmp:  String pointer is NULL");
	return (get_strncmp(s1, s2, n));
}
