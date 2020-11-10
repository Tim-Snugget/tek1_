/*
** EPITECH PROJECT, 2018
** get_map.c
** File description:
** get and save the map
*/

#include "sokoban.h"

FILE *fopen_map(char *name)
{
	FILE *fd;

	fd = fopen(name, "r");
	if (fd == NULL)
		my_xerror("open_map failed... fopen returned a NULL pointer");
	return (fd);
}

char **malloc_lines(char *name)
{
	FILE *fd;
	char **ptr;
	char *buf = NULL;
	size_t n = 0;
	int nb_lines = 0;

	fd = fopen_map(name);
	while (getline(&buf, &n, fd) != -1) {
		my_free(buf);
		buf = NULL;
		n = 0;
		nb_lines++;
	}
	ptr = my_malloc(sizeof(char *) * (nb_lines + 1));
	fclose(fd);
	my_free(buf);
	return (ptr);
}

void stock_map(char *name, char **map)
{
	FILE *fd;
	char *buf = NULL;
	size_t n = 0;
	int cnt = 0;

	if (!name || !map)
		my_xerror("stock_map failed because of a NULL parameter");
	fd = fopen_map(name);
	while (getline(&buf, &n, fd) != -1) {
		map[cnt++] = my_strdup(buf);
		my_free(buf);
		buf = NULL;
		n = 0;
	}
	map[cnt] = NULL;
	fclose(fd);
	my_free(buf);
}

char **get_map(char *name)
{
	char **map;

	if (!name)
		my_xerror("the file_name is a NULL pointer");
	if (check_crate(name) == false)
		my_xerror("map format is not valid.");
	map = malloc_lines(name);
	stock_map(name, map);
	return (map);
}
