/*
** EPITECH PROJECT, 2018
** check_commands
** File description:
** verify if a command isn't set up twice
*/

#include "tetris.h"

bool check_keys(game_t *tmp)
{
	int lf = tmp->left_k;
	int r = tmp->right_k;
	int d = tmp->drop_k;
	int t = tmp->turn_k;
	int p = tmp->pause_k;
	int q = tmp->quit_k;

	if (lf == r || lf == r || lf == d || lf == t || r == d || r == t ||
	d == t)
		return (false);
	if (p == lf || p == r || p == d || p == t || p == q || q == lf ||
	q == r || q == d || q == t)
		return (false);
	return (true);
}

bool check_game_opts(game_t *tmp)
{
	if (tmp->map_row <= 0 || tmp->map_col <= 0 || tmp->lvl <= 0)
		return (false);
	else
		return (true);
}
