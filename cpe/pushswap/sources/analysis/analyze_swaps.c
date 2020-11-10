/*
** EPITECH PROJECT, 2017
** analyzes.c
** File description:
** analyze the acutal arrays
*/

#include "pushswap.h"

void analyze_swaps(datas_t *arrays)
{
	if (arrays->la[0] > arrays->la[1] && arrays->lb[0] < arrays->lb[1])
		swap_c(arrays);
	else if (arrays->la[0] > arrays->la[1])
		swap_a(arrays);
	else if (arrays->lb[0] < arrays->lb[1])
		swap_b(arrays);
}
