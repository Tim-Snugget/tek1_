/*
** EPITECH PROJECT, 2018
** tetris : my_sort_char_array
** File description:
** sort strings from an array
*/

#include "tetris.h"

void my_strswap(char *s1, char *s2)
{
	char *crate = my_strdup(s1);

	my_free(s1);
	s1 = my_strdup(s2);
	my_free(s2);
	s2 = my_strdup(crate);
	my_free(crate);
}

char **my_sort_char_array(char **array)
{
	for (int i = 0; array[i + 1] != NULL; i++)
		if (my_strcmp(array[i], array[i + 1]) > 0) {
			my_strswap(array[i], array[i + 1]);
			i = -1;
		}
	return (array);
}
