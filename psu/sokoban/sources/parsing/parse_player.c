/*
** EPITECH PROJECT, 2018
** parse_player.c
** File description:
** parse if there's a different number of player than 1
*/

#include "sokoban.h"

int is_player(char c)
{
	if (c == 'P')
		return (1);
	return (0);
}

bool check_single_player(char **map)
{
	int n = 0;

	for (int i = 0; map[i] && n <= 1; i++)
		for (int q = 0; map[i][q] && n <= 1; q++)
			n += is_player(map[i][q]);
	if (n != 1)
		return (false);
	return (true);
}
