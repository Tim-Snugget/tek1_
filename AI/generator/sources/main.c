/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** main
*/

#include "gen.h"
#include <time.h>

int main(int ac, char **av)
{
	int *infos;
	cell_t **maze;

	srand((unsigned int)time(NULL));
	if (check_params(ac, av) == false)
		return (84);
	infos = get_infos(ac, av);
	maze = init_maze(infos);
	shuffle_maze(maze, infos);
	if (infos[2] == 1)
		carve_perfect_labyrinth(maze, infos);
	display_maze(maze, infos);
	destroy_maze(maze);
	my_free(infos);
	return 0;
}
