/*
** EPITECH PROJECT, 2018
** lib : my_strcmp
** File description:
** compares two strings and return an int.
*/

#include "my.h"

int my_strcmp_spe(char *s1, char *s2)
{
	int i = 0;

	if (!s1 || !s2)
		return (-1000);
	for (; s1[i] && s2[i] && s1[i] == s2[i]; i++);
	return (s1[i] - s2[i]);
}

int my_strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
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
