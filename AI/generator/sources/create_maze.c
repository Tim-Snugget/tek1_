/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** create maze
*/

#include "gen.h"

cell_t set_cell(void)
{
	cell_t ptr;

	ptr.left = 1;
	ptr.top = 1;
	return (ptr);
}

cell_t **init_maze(int *infos)
{
	cell_t **maze = my_malloc(sizeof(cell_t *) * (infos[1] + 1));

	memset(maze, 0, sizeof(cell_t *) * (infos[1] + 1));
	for (int i = 0; i < infos[1]; i++)
		maze[i] = my_malloc(sizeof(cell_t) * (infos[0] + 1));
	for (int i = 0; i < infos[1]; i++)
		for (int t = 0; t < infos[0]; t++)
			memset(maze[i], 0, \
sizeof(cell_t) * (infos[0] + 1));
	for (int i = 0; i < infos[1]; i++)
		for (int t = 0; t < infos[0]; t++)
			maze[i][t] = set_cell();
	return (maze);
}

void destroy_maze(cell_t **maze)
{
	if (!maze)
		return;
	for (int i = 0; maze[i] != NULL; my_free(maze[i]), i++);
	my_free(maze);
}
