/*
** EPITECH PROJECT, 2018
** get_map.c
** File description:
** get the map u want
*/

#include "mts.h"

void put_std_row(char *row, int i, int max_w)
{
	int nb_sticks = i * 2 - 1;
	int nb_spaces = max_w - nb_sticks - 2;
	int index = 1;

	row[0] = '*';
	for (int j = 0; j < nb_spaces / 2; j++, index++)
		row[index] = ' ';
	for (int j = 0; j < nb_sticks; j++, index++)
		row[index] = '|';
	for (int j = 0; j < nb_spaces / 2; j++, index++)
		row[index] = ' ';
	row[index] = '*';
	row[max_w] = '\0';
}

char *fill_map(int i, int line, int max_w)
{
	char *ptr = my_malloc(sizeof(char) * (max_w + 1));

	if (i == 0 || i == line + 1)
		for (int t = 0; t < max_w; t++)
			ptr[t] = '*';
	else
		put_std_row(ptr, i, max_w);
	return (ptr);
}

Map *get_map(int line)
{
	Map *ptr = my_malloc(sizeof(*ptr));

	ptr->size = line;
	ptr->board_s = line + 3;
	ptr->max_w = line * 2 + 1;
	ptr->map = my_smalloc(ptr->map, 0, sizeof(char*) * (line + 3));
	for (int i = 0; i < line + 2; i++)
		ptr->map[i] = fill_map(i, line, ptr->max_w);
	return (ptr);
}
