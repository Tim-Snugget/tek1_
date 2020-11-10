/*
** EPITECH PROJECT, 2018
** parse_box_n_slots.c
** File description:
** check if there are enoguh storage slots for boxes
*/

#include "sokoban.h"

int check_box_n_slot(char c)
{
	if (c == 'O')
		return (1);
	else if (c == 'X')
		return (-1);
	else
		return (0);
}

bool check_box_slots(char **map)
{
	int cnt = 0;

	for (int i = 0; map[i]; i++)
		for (int q = 0; map[i][q]; q++)
			cnt += check_box_n_slot(map[i][q]);
	if (cnt >= 0)
		return (true);
	else
		return (false);
}
