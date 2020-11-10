/*
** EPITECH PROJECT, 2018
** init_tetris.c
** File description:
** initialize tetris, with commands
*/

#include "tetris.h"

void set_default_values(game_t *tmp)
{
	tmp->left_k = KEY_LEFT;
	tmp->right_k = KEY_RIGHT;
	tmp->turn_k = KEY_UP;
	tmp->drop_k = KEY_DOWN;
	tmp->quit_k = 'q';
	tmp->pause_k = 'p';
	tmp->next = true;
	tmp->map_row = 20;
	tmp->map_col = 10;
	tmp->lvl = 1;
}

bool check_commands(game_t *tmp)
{
	if (check_keys(tmp) == false)
		return (false);
	else if (check_game_opts(tmp) == false)
		return (false);
	else
		return (true);
}

game_t *get_commands(int ac, char **av)
{
	game_t *tmp;

	tmp = my_malloc(sizeof(game_t));
	set_default_values(tmp);
	if (ac != 1) {
		for (int i = 1; i != ac - 1; i++)
			assign_touch(av[i], av[i + 1], tmp);
		last_assignement(av[ac - 1], tmp);
	}
	if (check_commands(tmp) == false) {
		my_free(tmp);
		return (NULL);
	}
	return (tmp);
}
