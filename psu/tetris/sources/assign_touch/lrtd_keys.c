/*
** EPITECH PROJECT, 2018
** left_right_turn_drop_keys.c
** File description:
** assignement of keys file
*/

#include "tetris.h"

void drop_key(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-d") == 0) {
		if (my_strlen(key) != 1)
			return;
		tmp->drop_k = key[0];
		return;
	}
	if (my_strncmp(opt, "--drop-key=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->drop_k = opt[11];
		return;
	}
	pause_key(opt, key, tmp);
	return;
}

void turn_key(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-t") == 0) {
		if (my_strlen(key) != 1)
			return;
		tmp->turn_k = key[0];
		return;
	}
	if (my_strncmp(opt, "--key-turn=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->turn_k = opt[11];
		return;
	}
	drop_key(opt, key, tmp);
	return;
}

void right_key(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-r") == 0) {
		if (my_strlen(key) != 1)
			return;
		tmp->right_k = key[0];
		return;
	}
	if (my_strncmp(opt, "--key-right=", 12) == 0) {
		if (my_strlen(opt) != 13)
			return;
		tmp->right_k = opt[12];
		return;
	}
	turn_key(opt, key, tmp);
	return;
}

void assign_touch(char *opt, char *key, game_t *tmp)
{
	if (my_strcmp(opt, "-l") == 0) {
		if (my_strlen(key) != 1)
			return;
		tmp->left_k = key[0];
		return;
	}
	if (my_strncmp(opt, "--key-left=", 11) == 0) {
		if (my_strlen(opt) != 12)
			return;
		tmp->left_k = opt[11];
		return;
	}
	right_key(opt, key, tmp);
	return;
}
