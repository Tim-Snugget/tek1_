/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** shuffle the maze's paths
*/

#include "gen.h"

void clear_first_row(cell_t *row, int width)
{
	for (int i = 1; i < width; row[i].left = 0, i++);
}

void carve_line(cell_t *row, int width)
{
	int crate = width;
	int rng = get_random_nbr() % width + 1;

	for (int index = 0; crate != 0; ) {
		for (int t = 1; t < rng; t++)
			row[index + t].left = 0;
		row[get_random_nbr() % rng + index].top = 0;
		index += rng;
		crate -= rng;
		if (crate == 0)
			break;
		rng = get_random_nbr() % crate + 1;
	}
}

void shuffle_maze(cell_t **maze, int *infos)
{
	for (int i = 0; i < infos[1]; i++)
		carve_line(maze[i], infos[0]);
	clear_first_row(maze[0], infos[0]);
}
