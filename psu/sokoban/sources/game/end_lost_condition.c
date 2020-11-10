/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** you lost...
*/

#include "sokoban.h"

bool is_crate_on_slot(int y, int x, game_t *infos)
{
	for (int i = 0; infos->slots[i]; i++)
		if (infos->slots[i]->x == x && infos->slots[i]->y == y)
			return (true);
	return (false);
}

bool is_surround_crate(char **map, int y, int x)
{
	if (map[y - 1][x] == '#' || map[y + 1][x] == '#')
		if (map[y][x + 1] == '#' || map[y][x - 1] == '#')
			return (true);
	return (false);
}

bool check_pos(char **map, int y, int x, game_t *infos)
{
	if (is_crate_on_slot(y, x, infos) == true)
		return (true);
	if (is_surround_crate(map, y, x) == true)
		return (false);
	return (true);
}

bool analyze_line_pos(char **map, int y, game_t *infos)
{
	int x;

	for (x = 0; map[y][x]; x++)
		if (map[y][x] == 'X' && check_pos(map, y, x, infos) == false)
			return (false);
	return (true);
}
