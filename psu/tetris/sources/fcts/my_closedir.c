/*
** EPITECH PROJECT, 2018
** my_closedir.c
** File description:
** opendir fct with error handling
*/

#include "tetris.h"

void my_closedir(DIR *ptr)
{
	int val = closedir(ptr);

	if (val == -1) {
		perror("closedir");
		exit(84);
	} else
		return;
}
