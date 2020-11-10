/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** parse functions
*/

#include "lemin.h"

bool check_ant_nb_line(char *buf)
{
	for (int i = 0; buf[i]; i++)
		if (buf[i] != '\n' && my_isnum(buf[i]) == false)
			return (false);
	if (count_nbrs(buf) != 1)
		return (false);
	return (true);
}

bool parse_line(char *buf, int line)
{
	if (line == 0)
		return (check_ant_nb_line(buf));
	if (buf[0] == '#' && buf[1] != '#')
		return (true);
	if (my_strncmp(buf, "##", 2) == 0) {
		if (my_strcmp(&buf[2], "start\n") != 0 &&
		my_strcmp(&buf[2], "end\n") != 0)
			return (false);
		else
			return (true);
	}
	if (count_words(buf) == 2 || count_words(buf) >= 4)
		return (false);
	else {
		if (count_words(buf) == 3 && verify_room_name(buf) == false)
			return (false);
		else if (count_words(buf) == 1 && verify_node(buf) == false)
			return (false);
	}
	return (true);
}

bool is_doublons(room_t **crate, int i)
{
	for (int j = i + 1; crate[j]; j++) {
		if (my_strcmp(crate[i]->name, crate[j]->name) == 0)
			return (false);
		else if (crate[i]->coords->x == crate[j]->coords->x &&
			crate[i]->coords->y == crate[j]->coords->y)
			return (false);
	}
	return (true);
}

bool check_doublons(room_t **crate)
{
	for (int i = 0; crate[i + 1] != NULL; i++)
		if (is_doublons(crate, i) == false)
			return (false);
	return (true);
}
