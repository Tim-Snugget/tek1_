/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** put a given string
*/

#include "my.h"

void my_puts(char const *str)
{
	int i = 0;

	if (!str)
		return;
	for (; str[i]; i++);
	write(1, str, i);
	my_putchar('\n');
}

void my_putstr(char const *str)
{
	int i = 0;

	if (!str)
		my_xerror("my_putstr:  str has a NULL value");
	for (; str[i]; i++);
	write(1, str, i);
}
