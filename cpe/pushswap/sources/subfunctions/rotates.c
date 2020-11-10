/*
** EPITECH PROJECT, 2017
** rotates.c
** File description:
** rotate functions
*/

#include "pushswap.h"

void rotate_a(datas_t *arrays)
{
	int crate = arrays->la[0];
	int size = arrays->la_len - 1;

	for (int x = 0; x != size; x++)
		arrays->la[x] = arrays->la[x + 1];
	arrays->la[size] = crate;
	my_putstr("ra ");
}

void rotate_b(datas_t *arrays)
{
	int crate = arrays->lb[0];
	int size = arrays->lb_len - 1;

	for (int x = 0; x != size; x++)
		arrays->lb[x] = arrays->lb[x + 1];
	arrays->lb[size] = crate;
	my_putstr("rb ");
}

void rotate_r(datas_t *arrays)
{
	int crate_a = arrays->la[0];
	int crate_b = arrays->lb[0];
	int size_a = arrays->la_len - 1;
	int size_b = arrays->lb_len - 1;

	for (int x = 0; x != size_a; x++)
		arrays->la[x] = arrays->la[x + 1];
	for (int x = 0; x != 1666; x++)
		arrays->lb[x] = arrays->lb[x + 1];
	arrays->la[size_a] = crate_a;
	arrays->lb[size_b] = crate_b;
	my_putstr("rr ");
}
