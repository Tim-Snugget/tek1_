/*
** EPITECH PROJECT, 2018
** my_free_malloc.c
** File description:
** my_free and my_malloc functions
*/

#include "my.h"

void my_free(void *ptr)
{
	if (ptr == NULL)
		return;
	free(ptr);
}

void *my_malloc(int size)
{
	void *ptr = NULL;

	if (size <= 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

void my_free_tab(char **tab)
{
	for (int i = 0; tab[i]; i++)
		my_free(tab[i]);
	free(tab);
}

char *my_realloc_str(char *str, int size)
{
	char *s;
	int len;

	if (str == NULL) {
		s = my_malloc(size);
		s[0] = '\0';
		return (s);
	}
	len = my_strlen(str);
	if (size < len)
		return (NULL);
	s = my_malloc(size);
	for (int i = 0; i < len; i++)
		s[i] = str[i];
	s[len] = '\0';
	my_free(str);
	return (s);
}
