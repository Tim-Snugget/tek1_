/*
** EPITECH PROJECT, 2018
** map_functions.c
** File description:
** map functions
*/

#include "navy.h"
#include "my.h"

char **init_map(void)
{
	char **ptr = my_malloc(sizeof(char*) * 9);

	for (int i = 0; i < 8; i++) {
		ptr[i] = my_malloc(sizeof(char) * 9);
		my_memset(ptr[i], '.', 8);
		ptr[i][8] = '\0';
	}
	return (ptr);
}

void set_boat(char **arg, char **map)
{
	if (arg[1][0] == arg[2][0])
		for (int i = arg[1][1] - '1'; i <= arg[2][1] - '1'; i++)
			map[i][arg[1][0] - 'A'] = arg[0][0];
	else
		for (int i = arg[1][0] - 'A'; i <= arg[2][0] - 'A'; i++)
			map[arg[1][1] - '1'][i] = arg[0][0];
}

bool is_free_spot(char c)
{
	if (c == '.')
		return (true);
	else
		return (false);
}

bool is_empty_space(char **arg, char **map)
{
	bool t = true;

	if (arg[1][0] == arg[2][0])
		for (int i = arg[1][1] - '1'; i <= arg[2][1] - '1' && t; i++)
			t = is_free_spot(map[i][arg[1][0] - 'A']);
	else
		for (int i = arg[1][0] - 'A'; i <= arg[2][0] - 'A' && t; i++)
			t = is_free_spot(map[arg[1][1] - '1'][i]);
	return (t);
}
