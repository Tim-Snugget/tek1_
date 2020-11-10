/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** lem in additionnal function
*/

#include "lemin.h"

char *get_word(char *str)
{
	char *ptr;
	int i;

	for (i = 0; str[i] != '\n' && str[i] != '\v' && str[i] != '\t' &&
		str[i] != ' ' && str[i] != '\0'; i++);
	ptr = malloc(sizeof(char) * (i + 1));
	ptr[i] = '\0';
	for (int j = 0; j < i; ptr[j] = str[j], j++);
	return (ptr);
}

void *free_rooms(room_t **ptr)
{
	for (int i = 0; ptr[i]; i++) {
		my_free(ptr[i]->name);
		my_free(ptr[i]->coords);
		my_free(ptr[i]);
	}
	my_free(ptr);
	return (NULL);
}

int count_rooms(char **params)
{
	int cnt = 0;

	if (!params)
		return (-1);
	for (int i = 0; params[i]; i++)
		if (params[i][0] != '#' && count_words(params[i]) == 3)
			cnt++;
	return (cnt);
}
