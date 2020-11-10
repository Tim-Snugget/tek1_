/*
** EPITECH PROJECT, 2017
** my_pushswap.c
** File description:
** sort the list
*/

#include "pushswap.h"

int check_arrays_order(datas_t *arrays)
{
	int cnta = 0;
	int cntb = 0;

	while (cnta != arrays->la_len - 1) {
		if (arrays->la[cnta] > arrays->la[cnta + 1])
			return (0);
		cnta++;
	}
	while (cntb != arrays->lb_len - 1) {
		if (arrays->lb[cntb] < arrays->lb[cntb + 1])
			return (0);
		cntb++;
	}
	if (arrays->la[0] < arrays->lb[0])
		return (0);
	return (1);
}

void my_pushswap(datas_t *arrays)
{
	if (check_arrays_order(arrays) == 1)
		my_putchar('\n');
	else
		sort_arrays(arrays);
}

void sort_arrays(datas_t *arrays)
{
	while (check_arrays_order(arrays) != 1) {
		analyze_swaps(arrays);
		rotation(arrays);
		if (check_smest(arrays) == 1)
			push_b(arrays);
	}
	push_b(arrays);
	while (arrays->lb_len != 0) {
		push_a(arrays);
		if (arrays->lb_len != 0)
			my_putchar(' ');
		else
			my_putchar('\n');
	}
}
