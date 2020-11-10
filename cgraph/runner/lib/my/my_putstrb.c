/*
** EPITECH PROJECT, 2018
** my_putstrb.c
** File description:
** print a string, with a '\n' in the end
*/

#include "my.h"

void my_putstrb(const char *str)
{
	int i = 0;

	for (; str[i]; i++);
	write(1, str, i);
	my_putchar('\n');
}
