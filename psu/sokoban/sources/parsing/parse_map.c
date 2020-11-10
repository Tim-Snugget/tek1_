/*
** EPITECH PROJECT, 2018
** parse_map.c
** File description:
** verify the validity of the map
*/

#include "sokoban.h"

bool parse_map(char **map)
{
	bool p = true;

	if (!map)
		my_xerror("parse_map:  map has a NULL value");
	for (int i = 0; map[i] && p == true; i++)
		for (int q = 0; map[i][q] && p == true; q++)
			p = check_char(map[i][q]);
	if (p == false)
		return (p);
	if (check_single_player(map) == false || check_box_slots(map) == false)
		return (false);
	return (true);
}
