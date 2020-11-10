/*
** EPITECH PROJECT, 2018
** lib : my_strncmp
** File description:
** compares the first n bytes from two strings and returns an int
*/

#include "my.h"

int my_strncmp(char *s1, char *s2, int n)
{
	int i = 0;
	int j = 0;

	while (i < n && j < n)
		if (s1[i] == s2[j]) {
			i++;
			j++;
		}
		else if (s1[i] > s2[j])
			return (1);
		else
			return (-1);
	return (0);
}
