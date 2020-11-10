/*
** EPITECH PROJECT, 2017
** push_a.c
** File description:
** necessary function to do a push a instruction
*/

#include "pushswap.h"

int *update_lb_give(datas_t *arrays)
{
        int *new_array = malloc((sizeof(arrays->lb_len) * sizeof(int)) - \
				sizeof(int));
	int x = 0;

	arrays->lb_len -= 1;
	while (x != arrays->lb_len) {
		new_array[x] = arrays->lb[x + 1];
		x++;
	}
	return (new_array);
}

void push_a(datas_t *arrays)
{
	arrays->la = update_la_get(arrays);
	arrays->lb = update_lb_give(arrays);
	my_putstr("pa");
}

int *update_la_get(datas_t *arrays)
{
	int *new_array = malloc(sizeof(arrays->la) + sizeof(int));
	int counter = arrays->la_len;

	while (counter != 0) {
		new_array[counter] = arrays->la[counter - 1];
		counter--;
	}
	arrays->la_len += 1;
	new_array[0] = arrays->lb[0];
	return (new_array);
}
