/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** put a given string
*/

#include "my.h"

void my_puterr(char *s)
{
	write(1, "Error: ", 7);
	my_puts(s);
}

void my_puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	for (; str[i]; i++);
	write(1, str, i);
	my_putchar('\n');
}

void my_putstr(char *str)
{
	int i = 0;

	if (!str)
		return;
	for (; str[i]; i++);
	write(1, str, i);
}
