/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** concatenates two given strings
*/

#include "my.h"

char *my_strcat_r(char *dest, char const *s1, char const *s2, int c)
{
	int i;

	for (i = 0; s1[i]; i++)
		dest[i] = s1[i];
	dest[i++] = c;
	for (int j = 0; s2[j]; j++, i++)
		dest[i] = s2[j];
	dest[i] = '\0';
	return (dest);
}

char *my_strcat_s(char const *s1, char const *s2, char c)
{
	char *s = my_malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) +
					2));
	int i;

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	s[i++] = c;
	for (int j = 0; s2[j]; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}

char *my_strcat(char *dest, char *src)
{
	int j = 0;

	for (int i = my_strlen(dest); src[j]; i++, j++)
		dest[i] = src[j];
	return (dest);
}
