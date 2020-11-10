/*
** EPITECH PROJECT, 2018
** mytetris
** File description:
** verify_tetrimino.c
*/

#include "tetris.h"

int *get_infos_tetrimino(char *name)
{
	int fd = my_open(my_strcat_s("tetriminos", name, '/'));
	char *buf = get_next_line(fd);
	int *ptr;
	int i;

	if (!buf || count_nbrs(buf) != 3)
		return (NULL);
	ptr = my_malloc(sizeof(int) * 3);
	ptr[0] = my_getnbr(name);
	for (i = 0; buf[i] != ' ' && buf[i]; i++);
	if (buf[i] == '\0')
		return (NULL);
	ptr[1] = my_getnbr(&buf[i]);
	for (i = i; buf[i] != ' ' && buf[i]; i++);
	if (buf[i] == '\0')
		return (NULL);
	ptr[2] = my_getnbr(&buf[i]);
	my_free(buf);
	close(fd);
	return (ptr);
}

bool verify_tetrimino(char *name)
{
	int *stats;

	stats = init_stat_arr(my_strcat_s("tetriminos", name, '/'));
	if (stats == NULL)
		return (false);
	if (verify_map(my_strcat_s("tetriminos", name, '/'), stats) == -1)
		return (false);
	return (true);
}
