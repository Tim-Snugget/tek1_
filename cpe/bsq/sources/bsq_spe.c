/*
** EPITECH PROJECT, 2017
** bsq_spe.c
** File description:
** special case handling functions
*/

#include "bsq_my.h"

void one_line_handling(const char *buf)
{
	int z = set_z(buf);
	int crate = 0;

	while (buf[z] != '\0') {
		if (buf[z] == '.' && crate == 0) {
			my_putchar('x');
			crate = 1;
		} else
			my_putchar(buf[z]);
		z++;
	}
}

bool check_else(char **map, int nb_line, int x, int y)
{
	x++;
	while (y != nb_line) {
		while (map[y][x] != '.' && map[y][x] != '\0')
			x++;
		if (map[y][x] == '\0') {
			x = 0;
			y++;
		}
		else
			return (true);
	}
	return (false);
}

int full_obs(char **map, int nb_line)
{
	int y = 0;
	int x = 0;
	int check = 0;

	while (y != nb_line && check != 1) {
		while (map[y][x] != '\0' && map[y][x] != '.')
			x++;
		if (map[y][x] == '\0') {
			x = 0;
			y++;
		}
		else
			check = 1;
	}
	if (check_else(map, nb_line, x, y) == true)
		return (2);
	return (check);
}

void single_hdlg(char **map, int nb_line)
{
	int y = 0;
	int x = 0;
	int checker = 0;

	while (y != nb_line && checker != 1) {
		while (map[y][x] != '\0' && map[y][x] != '.')
			x++;
		if (map[y][x] == '\0') {
			x = 0;
			y++;
		} else {
			map[y][x] = 'x';
			checker = 1;
		}
	}
	display_map(map, (size_t)nb_line);
}

bool special_case(char **map, int nb_line)
{
	int check_space = full_obs(map, nb_line);

	if (check_space != 2) {
		if (check_space == 1)
			single_hdlg(map, nb_line);
		else
			display_map(map, nb_line);
		return (true);
	}
	return (false);
}
