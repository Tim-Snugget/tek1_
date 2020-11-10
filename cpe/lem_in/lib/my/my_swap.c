/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** swap two pointed values
*/

#include "my.h"

void my_swap(int *a, int *b)
{
	int crate;

	if (!a || !b)
		return;
	crate = *a;
	*a = *b;
	*b = crate;
}
