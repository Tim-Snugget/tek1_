/*
** EPITECH PROJECT, 2018
** little_fcts.c
** File description:
** little and useful functions
*/

#include "tetris.h"

bool is_map_size_format(char *str)
{
	int t = 0;

	for (int i = 0; str[i]; i++) {
		if (((str[i] < '0' && str[i] != ',') || str[i] > '9') ||\
(str[i] == ',' && str[i + 1] == '\0'))
			return (false);
		if (str[i] == ',')
			t++;
	}
	if (t != 1)
		return (false);
	return (true);
}

bool my_isnbr(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] <= '0' || str[i] >= '9')
			return (false);
	return (true);
}
