/*
** EPITECH PROJECT, 2017
** pushs.c
** File description:
** pushs functions
*/

#include "pushswap.h"

int *update_lb_get(datas_t *arrays)
{
	int *new_array = malloc(sizeof(arrays->lb) + sizeof(int));
	int counter = arrays->lb_len;

	while (counter != 0) {
		new_array[counter] = arrays->lb[counter - 1];
		counter--;
	}
	arrays->lb_len += 1;
	new_array[0] = arrays->la[0];
	return (new_array);
}

int *update_la_give(datas_t *arrays)
{
	int *new_array = malloc((sizeof(arrays->la_len) * sizeof(int)) - sizeof(int));
	int x = 0;

	arrays->la_len -= 1;
	while (x != arrays->la_len) {
		new_array[x] = arrays->la[x + 1];
		x++;
	}
	return (new_array);
}

void push_b(datas_t *arrays)
{
	arrays->lb = update_lb_get(arrays);
	arrays->la = update_la_give(arrays);
	my_putstr("pb ");
}
