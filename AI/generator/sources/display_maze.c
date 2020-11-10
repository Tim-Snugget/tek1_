/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** display the maze
*/

#include "gen.h"

void display_first_row(cell_t *row, int *infos)
{
	write(1, "*", 1);
	for (int i = 1; i < infos[0]; i++) {
		if (row[i].top == 1)
			write(1, "XX", 2);
		else
			write(1, "*X", 2);
	}
	if (infos[3] % 2 == 0)
		write(1, "X", 1);
	write(1, "\n", 1);
	write(1, "*", 1);
	for (int i = 1; i < infos[0]; i++)
		write(1, "**", 2);
	if (infos[3] % 2 == 0)
		write(1, "X", 1);
	write(1, "\n", 1);
}

void display_top_row(cell_t *row, int *infos)
{
	for (int i = 0; i < infos[0] - 1; i++) {
		if (row[i].top == 0)
			write(1, "*X", 2);
		else
			write(1, "XX", 2);
	}
	if (row[infos[0] - 1].top == 0)
		write(1, "*", 1);
	else
		write(1, "X", 1);
	if (infos[3] % 2 == 0)
		write(1, "X", 1);
	write(1, "\n*", 2);
}

void display_row(cell_t *row, int *infos, cell_t *next)
{
	display_top_row(row, infos);
	for (int i = 1; i < infos[0]; i++) {
		if (row[i].left == 0)
			write(1, "**", 2);
		else
			write(1, "X*", 2);
	}
	if (next == NULL) {
		if (infos[3] % 2 == 1) {
			write(1, "\n", 1);
			return;
		}
		write(1, "*", 1);
	} else if (infos[3] % 2 == 0)
		write(1, "X", 1);
	write(1, "\n", 1);
}

void display_last_row(int *infos)
{
	if (infos[4] % 2 == 0)
		return;
	for (int i = 1; i < infos[3]; i++)
		write(1, "X", 1);
	write(1, "*\n", 2);
}

void display_maze(cell_t **maze, int *infos)
{
	display_first_row(maze[0], infos);
	for (int i = 1; maze[i] != NULL; i++)
		display_row(maze[i], infos, maze[i + 1]);
	display_last_row(infos);
}
