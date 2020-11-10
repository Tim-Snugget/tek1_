/*
** EPITECH PROJECT, 2017
** r_rotates.c
** File description:
** reverse rotation
*/

#include "pushswap.h"

void r_rotate_a(datas_t *arrays)
{
	int size = arrays->la_len - 1;
	int crate = arrays->la[size];

	for (int x = size; x != 0; x--)
		arrays->la[x] = arrays->la[x - 1];
	arrays->la[0] = crate;
	my_putstr("rra ");
}

void r_rotate_b(datas_t *arrays)
{
	int size = arrays->lb_len - 1;
	int crate = arrays->lb[size];

	for (int x = size; x != 0; x--)
		arrays->lb[x] = arrays->lb[x - 1];
	arrays->lb[0] = crate;
	my_putstr("rrb ");
}

void r_rotate_r(datas_t *arrays)
{
	int size = arrays->la_len - 1;
	int crate = arrays->la[size];

	for (int x = size; x != 0; x--)
		arrays->la[x] = arrays->la[x - 1];
	arrays->la[0] = crate;
	size = arrays->lb_len - 1;
	crate = arrays->lb[size];
	for (int x = size; x != 0; x--)
		arrays->lb[x] = arrays->lb[x - 1];
	arrays->lb[0] = crate;
	my_putstr("rrr ");
}
