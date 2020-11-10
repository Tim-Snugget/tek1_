/*
** EPITECH PROJECT, 2018
** map.c
** File description:
** map handling
*/

#include "runner.h"

void stock_map(char **tab, char *buf, int cnt, size_t read)
{
	for (size_t i = 0; i != read - 1; i++)
		tab[cnt][i] = buf[i];
	tab[cnt][read - 1] = '\0';
}

char **get_tab(char **tab, const char *str)
{
	FILE *stream = fopen(str, "r");
	char *buf = NULL;
	size_t n = 0;
	ssize_t read = 0;
	int cnt = 0;

	if (stream == NULL)
		return (NULL);
	read = getline(&buf, &n, stream);
	while (read != -1) {
		tab[cnt] = malloc(sizeof(char) * (read));
		if (tab[cnt] == NULL)
			return (NULL);
		stock_map(tab, buf, cnt, read);
		cnt++;
		read = getline(&buf, &n, stream);
	}
	tab[cnt] = NULL;
	free(buf);
	fclose(stream);
	return (tab);
}

char **get_map(const char *str, char **tab)
{
	FILE *stream = fopen(str, "r");
	char *buf = NULL;
	size_t n = 0;
	ssize_t read = 0;
	int cnt = 0;

	if (stream == NULL)
		return (NULL);
	read = getline(&buf, &n, stream);
	while (read != -1) {
		cnt++;
		free(buf);
		buf = NULL;
		read = getline(&buf, &n, stream);
	}
	tab = malloc(sizeof(char *) * (cnt + 1));
	free(buf);
	fclose(stream);
	return (tab);
}
