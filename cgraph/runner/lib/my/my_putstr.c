/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** display a string
*/

#include "my.h"

void my_putstr(const char *str)
{
	int i = 0;

	for (; str[i]; i++);
	write(1, str, i);
}
