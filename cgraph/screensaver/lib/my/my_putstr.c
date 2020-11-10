/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** put a given string
*/

#include "my.h"

int my_putstr(char const *str)
{
	for (int i = 0; str[i]; i++)
		my_putchar(str[i]);
}
