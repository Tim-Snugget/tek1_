/*
** EPITECH PROJECT, 2017
** size_b.c
** File description:
** put the size in bytes of the targeted entity
*/

#include "ls_my.h"

void put_size_b(off_t size)
{
	my_put_nbr(size);
	my_putchar(' ');
}
