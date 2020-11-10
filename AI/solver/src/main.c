/*
** EPITECH PROJECT, 2018
** dante : solver : main
** File description:
** main.c
*/

#include "solver.h"

int get_nb_lines(char **map)
{
	int i;

	for (i = 0; map[i]; i++);
	return (i);
}

void my_free(void *ptr)
{
	if (!ptr)
		return;
	free(ptr);
}

void free_array(char **array)
{
	for (int i = 0; array[i] != NULL; i++)
		my_free(array[i]);
	my_free(array);
}

int main(int ac, char **av)
{
	bool complete = false;
	char **map = check_params(ac, av);
	coords_t obj;
	coords_t curs = {0, 0};

	if (map == NULL)
		return (84);
	obj.x = strlen(map[0]) - 1;
	obj.y = get_nb_lines(map) - 1;
	explore(map, &curs, &obj, &complete);
	free_array(map);
	if (complete == true)
		return (0);
	else {
		printf("no solution found\n");
		return (84);
	}
	return (0);
}
