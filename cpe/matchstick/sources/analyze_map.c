/*
** EPITECH PROJECT, 2018
** analyze_map.c
** File description:
** analyze the map
*/

#include "mts.h"

bool is_game_over(Map *board)
{
	int j;

	for (int i = 1; i < board->board_s - 1; i++) {
		for (j = 0; board->map[i][j] && board->map[i][j] != '|'; j++);
		if (board->map[i][j] == '|')
			return (false);
	}
	return (true);
}

int remaining_matches(char *map_row)
{
	int cnt = 0;

	for (int i = 0; map_row[i]; i++)
		if (map_row[i] == '|')
			cnt++;
	return (cnt);
}

int close_end(Map *board)
{
	int crate = 0;
	int j;

	for (int i = 1; i < board->size + 1; i++) {
		for (j = 0; board->map[i][j] &&
			board->map[i][j] != '|'; j++);
		if (board->map[i][j] == '|')
			crate++;
	}
	return (crate);
}
