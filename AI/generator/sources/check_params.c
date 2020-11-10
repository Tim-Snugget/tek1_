/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** check parameters
*/

#include "gen.h"

bool check_values(char **av)
{
	if (atoi(av[1]) < 3 || atoi(av[2]) < 3) {
		dprintf(2, "Error: arguments have to be greater than 3.\n");
		return (false);
	}
	return (true);
}

bool check_params(int ac, char **av)
{
	if (ac < 3 || ac > 4)
		return (false);
	if (is_pos_nbr(av[1]) == false || is_pos_nbr(av[2]) == false)
		return (false);
	if (check_values(av) == false)
		return (false);
	if (ac == 4 && strcmp(av[3], "perfect") != 0 \
&& strcmp(av[3], "imperfect") != 0)
		return (false);
	return (true);
}
