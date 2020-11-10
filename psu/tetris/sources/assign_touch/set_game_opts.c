/*
** EPITECH PROJECT, 2018
** set_game_opts.c
** File description:
** lvl and size settings
*/

#include "tetris.h"

void disp_next(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-w") == 0) {
		if (my_strcmp(key, "true") == 0)
			tmp->next = true;
		else if (my_strcmp(key, "false") == 0)
			tmp->next = false;
		return;
	}
	if (my_strcmp(opt, "--without-next") == 0) {
		if (my_strcmp(key, "false") == 0)
			tmp->next = false;
		else if (my_strcmp(key, "true") == 0)
			tmp->next = true;
		return;
	}
	return;
}

void set_map_size(char *opt, char *key, game_t *tmp)
{
	int i;

	if (my_strncmp(opt, "--map-size=", 11) == 0) {
		if (is_map_size_format(&opt[11]) == false)
			return;
		tmp->map_row = my_getnbr(&opt[11]);
		for (i = 11; opt[i] != ','; i++);
		tmp->map_col = my_getnbr(&opt[i]);
		return;
	}
	disp_next(opt, key, tmp);
	return;
}

void set_game_opts(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-L") == 0) {
		if (my_isnbr(key) == false)
			return;
		tmp->lvl = my_getnbr(key);
		return;
	}
	if (my_strncmp(opt, "--level=", 8) == 0) {
		if (my_strlen(opt) == 8 || my_isnbr(&opt[8]) == false)
			return;
		tmp->lvl = my_getnbr(&opt[8]);
		return;
	}
	set_map_size(opt, key, tmp);
	return;
}
