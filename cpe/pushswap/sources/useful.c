/*
** EPITECH PROJECT, 2017
** useful.c
** File description:
** useful  functions
*/

#include "pushswap.h"

int get_smest_pos(datas_t *arrays)
{
	int smest = arrays->la[0];
	int cnt = 0;
	int pos = 0;

	while (cnt != arrays->la_len) {
		if (arrays->la[cnt] < smest) {
			smest = arrays->la[cnt];
			pos = cnt;
		}
		cnt++;
	}
	return (pos);
}

void rotation(datas_t *arrays)
{
	int instr = 0;
	int smest_pos = get_smest_pos(arrays);

	if (smest_pos == 0)
	        instr = 0;
	 if (arrays->la_len - smest_pos < smest_pos)
		instr = -1;
	else
	        instr = 1;
	if (instr == -1)
		r_rotate_a(arrays);
	else if (instr = 1)
		rotate_a(arrays);
}

int check_smest(datas_t *arrays)
{
	int checker = arrays->la[0];
	int size = arrays->la_len - 1;
	int x = 0;

	while (x != size) {
		if (checker > arrays->la[x])
			return (0);
		x++;
	}
	return (1);
}
