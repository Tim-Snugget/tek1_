/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** apeha
*/

#include "my.h"

void my_swap(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
