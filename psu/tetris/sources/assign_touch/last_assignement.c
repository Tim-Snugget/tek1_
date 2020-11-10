/*
** EPITECH PROJECT, 2018
** last_assignement.c
** File description:
** only one arg assignement
*/

#include "tetris.h"

void last_assmt_three(char *opt, game_t *tmp)
{
	int i;

	if (my_strncmp(opt, "--level=", 8) == 0) {
		if (my_strlen(opt) == 8 || my_isnbr(&opt[8]) == false)
			return;
		tmp->lvl = my_getnbr(&opt[8]);
		return;
	}
	if (my_strncmp(opt, "--map-size=", 11) == 0) {
		if (is_map_size_format(&opt[11]) == false)
			return;
		tmp->map_row = my_getnbr(&opt[11]);
		for (i = 11; opt[i] != ','; i++);
		tmp->map_col = my_getnbr(&opt[i]);
		return;
	}
	return;
}

void last_assmt_two(char *opt, game_t *tmp)
{
	if (my_strncmp(opt, "--drop-key=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->drop_k = opt[11];
		return;
	}
	if (my_strncmp(opt, "--key-pause=", 12) == 0) {
		if (my_strlen(opt) != 13)
			return;
		tmp->pause_k = opt[12];
		return;
	}
	if (my_strncmp(opt, "--key-quit=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->quit_k = opt[11];
		return;
	}
	last_assmt_three(opt, tmp);
	return;
}

void last_assignement(char *opt, game_t *tmp)
{
	if (my_strncmp(opt, "--key-left=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->left_k = opt[11];
		return;
	}
	if (my_strncmp(opt, "--key-right=", 12) == 0) {
		if (my_strlen(opt) != 13)
			return;
		tmp->right_k = opt[12];
		return;
	}
	if (my_strncmp(opt, "--key-turn=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->turn_k = opt[11];
		return;
	}
	last_assmt_two(opt, tmp);
	return;
}
