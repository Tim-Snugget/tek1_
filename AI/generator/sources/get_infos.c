/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** get infos from parameters
*/

#include "gen.h"

void check_laby_format(int *ptr)
{
	ptr[3] = ptr[0];
	ptr[4] = ptr[1];
	ptr[0] /= 2;
	ptr[1] /= 2;
	if (ptr[3] % 2 == 1)
		ptr[0]++;
}

int *get_infos(int ac, char **av)
{
	int *ptr = my_malloc(sizeof(int) * 5);

	if (!ptr)
		return (NULL);
	ptr[0] = atoi(av[1]);
	ptr[1] = atoi(av[2]);
	check_laby_format(ptr);
	if (ac == 3)
		ptr[2] = 1;
	if (ac == 4) {
		if (strcmp(av[3], "imperfect") == 0)
			ptr[2] = 1;
		else if (strcmp(av[3], "perfect") == 0)
			ptr[2] = 0;
	}
	return (ptr);
}
