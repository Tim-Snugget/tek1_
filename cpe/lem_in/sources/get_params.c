/*
** EPITECH PROJECT, 2018
** lem_in
** File description:
** get_params
*/

#include "lemin.h"

char **get_params(void)
{
	char **tab = NULL;
	char *buf = NULL;
	size_t n = 0;

	for (int i = 0; 1 < 2; i++) {
		if (getline(&buf, &n, stdin) == -1)
			return (tab);
		if (parse_line(buf, i) == false) {
			my_free(buf);
			return (NULL);
		}
		tab = my_add_alloc_tab(tab);
		tab[i] = my_strdup(buf);
		my_free(buf);
		buf = NULL;
		n = 0;
	}
	return (tab);
}
