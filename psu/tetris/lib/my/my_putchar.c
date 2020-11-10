/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** write a character
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putc(char c)
{
	my_putchar(c);
	my_putchar('\n');
}
