/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** conclusion condition
*/

#include "sokoban.h"

bool is_game_lost(char **map, game_t *infos)
{
	for (int y = 0; map[y] != NULL; y++)
		if (analyze_line_pos(map, y, infos) == false)
			return (false);
	return (true);
}

bool is_game_won(char **map, game_t *infos)
{
	int cnt = 0;

	for (int i = 0; infos->slots[i]; i++)
		if (map[infos->slots[i]->y][infos->slots[i]->x] == 'X')
			cnt++;
	if (cnt == infos->nb_crates)
		return (true);
	return (false);
}

bool is_game_finished(char **map, game_t *infos)
{
	if (is_game_lost(map, infos) == true)
		return (true);
	else if (is_game_won(map, infos) == true)
		return (true);
	else
		return (false);
}
