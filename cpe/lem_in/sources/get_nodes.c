/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** get nodes
*/

#include "lemin.h"

int count_nodes(char **params)
{
	int cnt = 0;

	for (int i = 0; params[i]; i++)
		if (params[i][0] != '#' && verify_node(params[i]) == true)
			cnt++;
	return (cnt);
}

char **get_nodes(char **params)
{
	char **ptr;
	int nb_nodes = count_nodes(params);

	if (nb_nodes == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (nb_nodes + 1));
	if (!ptr)
		return (NULL);
	my_memset(ptr, 0, sizeof(char *) * (nb_nodes + 1));
	for (int i = 0; params[i]; i++)
		if (params[i][0] != '#' && verify_node(params[i]) == true)
			ptr[i] = my_strdup(params[i]);
	return (ptr);
}
