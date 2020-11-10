/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** display_map
*/

#include "sokoban.h"

int get_max_width(char **map)
{
	int cnt = 0;

	for (int i = 0; map[i] != NULL; i++)
		if (my_strlen(map[i]) > cnt)
			cnt = my_strlen(map[i]);
	return (cnt);
}

int get_height(char **map)
{
	int cnt;

	for (cnt = 0; map[cnt] != NULL; cnt++);
	return (cnt);
}

void display_map(char **map, WINDOW *wdw)
{
	int max_w = get_max_width(map);
	int height = get_height(map);
	int cnt = 0;

	while (map[cnt] != NULL) {
		mvwprintw(wdw, (LINES - height) / 2 + cnt, (COLS - max_w) / 2,
			map[cnt]);
		cnt++;
	}
}
