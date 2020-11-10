/*
** EPITECH PROJECT, 2018
** pause_quit_keys.c
** File description:
** assignement of keys file
*/

#include "tetris.h"

void quit_key(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-q") == 0) {
		if (my_strlen(key) != 1)
			return;
		tmp->quit_k = key[0];
		return;
	}
	if (my_strncmp(opt, "--key-quit=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->quit_k = opt[11];
		return;
	}
	set_game_opts(opt, key, tmp);
	return;
}

void pause_key(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-p") == 0) {
		if (my_strlen(key) != 1)
			return;
		tmp->pause_k = key[0];
		return;
	}
	if (my_strncmp(opt, "--key-pause=", 12) == 0) {
		if (my_strlen(opt) != 13)
			return;
		tmp->pause_k = opt[12];
		return;
	}
	quit_key(opt, key, tmp);
	return;
}
