/*
** EPITECH PROJECT, 2018
** Dante's Star : solver : parse_file
** File description:
** parse file
*/

#include "solver.h"

bool parse_line(char *column)
{
	for (int i = 0; column[i] != '\0'; i++)
		if (column[i] != '*' && column[i] != 'X')
			return (false);
	return (true);
}

bool parse_file(char **map)
{
	unsigned int j = strlen(map[0]);

	for (int i = 0; map[i] != NULL; i++)
		if (j != strlen(map[i]) || parse_line(map[i]) == false)
			return (false);
	return (true);
}
