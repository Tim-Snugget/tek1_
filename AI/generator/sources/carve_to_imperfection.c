/*
** EPITECH PROJECT, 2018
** dante - gen
** File description:
** carve a labyrinth to get an imperfect one
*/

#include "gen.h"

bool is_carvable_wall(cell_t **maze, int i, int j, bool *check)
{
	if (maze[i][j].top == 1 && maze[i][j + 1].top == 1 && \
maze[i][j + 2].top == 1 && maze[i][j + 1].left == 0 && \
maze[i][j + 2].left == 0) {
		*check = true;
		return (true);
	} else
		return (false);
}

void carve_perfect_labyrinth(cell_t **maze, int *infos)
{
	int i;
	int j;
	bool check = false;

	for (i = 1; maze[i] && check == false; i++) {
		for (j = 0; j - 3 != infos[0] && \
is_carvable_wall(maze, i, j, &check) == false; j++);
		if (check == true) {
			maze[i][j].top = 0;
			maze[i][j + 2].top = 0;
			break;
		}
	}
}
