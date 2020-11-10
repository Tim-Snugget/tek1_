/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** is a positive nbr
*/

#include "gen.h"

bool is_pos_nbr(char *s)
{
	if (!s)
		return (false);
	for (int i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (false);
	return (true);
}
