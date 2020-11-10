/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** allocs functions
*/

#include "gen.h"

void *my_malloc(int size)
{
	void *ptr;

	if (size <= 0)
		exit(84);
	ptr = malloc(size);
	if (ptr == NULL)
		exit(84);
	return (ptr);
}

void my_free(void *ptr)
{
	if (!ptr)
		return;
	free(ptr);
}
