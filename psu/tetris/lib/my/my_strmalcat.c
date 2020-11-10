/*
** EPITECH PROJECT, 2018
** my_strmalcat.c
** File description:
** str malloc - concat fcts
*/

#include "my.h"

char *my_strmalcat(char *s1, char *s2)
{
	char *s;
	int l1;
	int l2;
	int index;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (my_strdup(s2));
	else if (!s2)
		return (my_strdup(s1));
	l1 = my_strlen(s1);
	l2 = my_strlen(s2);
	s = my_malloc(sizeof(char) * (l1 + l2 + 1));
	my_memset(s, '\0', sizeof(char) * (l1 + l2 + 1));
	for (index = 0; index < l1; index++)
		s[index] = s1[index];
	for (int i = 0; i < l2; i++, index++)
		s[index] = s2[i];
	return (s);
}

char *shorten_nmalcat(char *s1, char *s2, int n)
{
	char *s;
	int l1 = my_strlen(s1);
	int index;

	s = malloc(sizeof(char) * (l1 + n + 1));
	my_memset(s, '\0', sizeof(char) * (l1 + n + 1));
	for (index = 0; index < l1; index++)
		s[index] = s1[index];
	for (int i = 0; i < n; i++, index++)
		s[index] = s2[i];
	return (s);
}

char *my_strnmalcat(char *s1, char *s2, int n)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (my_strndup(s2, n));
	else if (!s2)
		return (my_strndup(s1, n));
	if (n < my_strlen(s2))
		return (shorten_nmalcat(s1, s2, n));
	else
		return (my_strmalcat(s1, s2));
}
