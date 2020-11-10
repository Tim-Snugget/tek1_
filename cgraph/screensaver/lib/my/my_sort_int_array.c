/*
** EPITECH PROJECT, 2017
** my_sort_int_array.c
** File description:
** sort a given array of int
*/

#include "my.h"

void swap_elem(int *tab, int i, int x)
{
	int crate = 0;

	crate = tab[i];
	tab[i] = tab[x];
	tab[x] = crate;
}

int *analyze_array(int x, int i, int tmp, int *tab)
{
	while (x != tmp) {
		if (tab[i] > tab[x])
			swap_elem(tab, i, x);
		i++;
		x++;
	}
	return (tab);
}

void my_sort_int_array(int *tab, int size)
{
	int i = 0;
	int x = 1;
	int tmp = size;

	while (tmp != 0) {
		analyze_array(x, i, tmp, tab);
		i = 0;
		x = 1;
		tmp--;
	}
}
