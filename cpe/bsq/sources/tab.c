/*
** EPITECH PROJECT, 2017
** tab.c
** File description:
** double ptrs functions
*/

#include "bsq_my.h"

int set_z(const char *buf)
{
	int i = 0;

	while (buf[i] != '\n')
		i++;
	i++;
	return (i);
}

int get_line_len(const char *buf, int z)
{
	int cnt = 0;

	while (buf[z] != '\n') {
		z++;
		cnt++;
	}
	return (cnt);
}

char **get_double_tab(const char *buf, int nb_line)
{
	int z = set_z(buf);
	int line_len = get_line_len(buf, z);
	char **res = malloc(sizeof(char *) * (nb_line));
	int x = 0;

	for (int y = 0; y != nb_line; y++) {
		x = 0;
		res[y] = malloc(sizeof(char) * (line_len + 1));
		while (buf[z] != '\n') {
			res[y][x] = buf[z];
			z++;
			x++;
		}
		res[y][x] = '\0';
		z++;
	}
	return (res);
}
