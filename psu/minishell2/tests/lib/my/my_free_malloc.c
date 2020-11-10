/*
** EPITECH PROJECT, 2018
** my_free_malloc.c
** File description:
** my_free and my_malloc functions
*/

#include "my.h"

void my_free(void *ptr)
{
	if (!ptr)
		exit(84);
	free(ptr);
}

void *my_malloc(int size)
{
	void *ptr;

	if (size <= 0)
		exit(84);
	ptr = malloc(size);
	if (!ptr)
		exit(84);
	return (ptr);
}

void my_free_tab(char **ptr)
{
	if (!ptr)
		return;
	for (int i = 0; ptr[i]; my_free(ptr[i]), i++);
	my_free(ptr);
}

char *my_realloc_str(char *str, int size)
{
	char *s;
	int len;

	if (!str) {
		s = my_malloc(size);
		s[0] = '\0';
		return (s);
	}
	len = my_strlen(str);
	if (size < len)
		my_xerror("my_realloc_str:  s value is too short.");
	s = my_malloc(size);
	for (int i = 0; i < len; i++)
		s[i] = str[i];
	s[len] = '\0';
	my_free(str);
	return (s);
}

char **my_set_tab(char **tab, int array_size)
{
	tab = my_malloc(sizeof(char*) * array_size + 1);
	for (int i = 0; i != array_size + 1; i++)
		tab[i] = NULL;
	return (tab);
}
