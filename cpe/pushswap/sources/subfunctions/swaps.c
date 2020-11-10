/*
** EPITECH PROJECT, 2017
** swaps.c
** File description:
** swap instuctions
*/

#include "pushswap.h"

void swap_a(datas_t *arrays)
{
	int crate = arrays->la[0];

	arrays->la[0] = arrays->la[1];
	arrays->la[1] = crate;
	my_putstr("sa ");
}

void swap_b(datas_t *arrays)
{
	int crate = arrays->lb[0];

	arrays->lb[0] = arrays->lb[1];
	arrays->lb[1] = crate;
	my_putstr("sb ");
}

void swap_c(datas_t *arrays)
{
	int crate_a = arrays->la[0];
	int crate_b = arrays->lb[0];

	arrays->la[0] = arrays->la[1];
	arrays->la[1] = crate_a;
	arrays->lb[0] = arrays->lb[1];
	arrays->lb[1] = crate_b;
	my_putstr("sc ");
}
