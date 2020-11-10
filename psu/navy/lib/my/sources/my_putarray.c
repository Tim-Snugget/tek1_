/*
** EPITECH PROJECT, 2018
** lib : my_putarray
** File description:
** print an array
*/

#include "my.h"

void my_putarray(char **array)
{
	for (int i = 0; array[i] != NULL; i++) {
		my_putstr(array[i]);
		my_putchar('\n');
	}
}
