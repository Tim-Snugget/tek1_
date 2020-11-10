/*
** EPITECH PROJECT, 2018
** my_lib
** File description:
** my_add_alloc_tab
*/

#include "my.h"

char **my_add_alloc_tab(char **tab)
{
	char **ptr;
	unsigned int cnt;

	if (!tab) {
		ptr = my_malloc(sizeof(char *) * 2);
		my_memset(ptr, 0, sizeof(char *) * 2);
		return (ptr);
	}
	for (cnt = 0; tab[cnt] != NULL; cnt++);
	ptr = my_malloc(sizeof(char *) * (cnt + 2));
	my_memset(ptr, 0, sizeof(char *) * (cnt + 2));
	for (cnt = 0; tab[cnt] != NULL; cnt++) {
		ptr[cnt] = my_strdup(tab[cnt]);
		my_free(tab[cnt]);
	}
	my_free(tab);
	return (ptr);
}
