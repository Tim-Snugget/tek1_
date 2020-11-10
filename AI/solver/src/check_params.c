/*
** EPITECH PROJECT, 2018
** Dante's Star : solver :
** File description:
** check parameters
*/

#include "solver.h"

char **get_map(char *path, int count)
{
	char **map = malloc(sizeof(char *) * (count + 1));
	char *buffer = NULL;
	FILE *stream = fopen(path, "r");
	ssize_t read = 0;
	size_t n = 0;

	if (stream == NULL || map == NULL)
		return (NULL);
	read = getline(&buffer, &n, stream);
	map[0] = strdup(buffer);
	for (int i = 0; read != -1; i++) {
		map[i] = strdup(buffer);
		if (i != count)
			map[i][strlen(map[i]) - 1] = '\0';
		read = getline(&buffer, &n, stream);
	}
	map[count] = NULL;
	free(buffer);
	fclose(stream);
	return (map);
}

int read_file(char *path)
{
	char *buffer = NULL;
	FILE *stream = fopen(path, "r");
	ssize_t read = 0;
	size_t n = 0;
	int count = 0;

	if (stream == NULL) {
		free(stream);
		return (-1);
	}
	read = getline(&buffer, &n, stream);
	if (read == -1)
		return (read);
	while (read != -1) {
		count++;
		read = getline(&buffer, &n, stream);
	}
	fclose(stream);
	return (count);
}

char **get_from_file(char *path)
{
	int count = read_file(path);
	char **map = NULL;

	if (count == -1)
		return (NULL);
	map = get_map(path, count);
	if (map == NULL)
		return (NULL);
	if (parse_file(map) == false)
		return (NULL);
	return (map);
}

char **check_params(int ac, char **av)
{
	char **map = NULL;

	if (ac != 2)
		return (NULL);
	map = get_from_file(av[1]);
	return (map);
}
