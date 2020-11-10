/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "pushswap.h"

int main(int ac, char **av)
{
	datas_t *arrays = malloc(sizeof(datas_t));
	int x = 0;

	arrays->la_len = ac - 1;
	arrays->la = malloc(sizeof(int) * arrays->la_len);
	while (x != arrays->la_len) {
		arrays->la[x] = my_getnbr(av[x + 1]);
		x++;
	}
	arrays->lb_len = 0;
	arrays->lb = malloc(sizeof(int) * arrays->lb_len);
	my_pushswap(arrays);
	return (0);
}
