/*
** EPITECH PROJECT, 2018
** disp_map.c
** File description:
** display the current map
*/

#include "mts.h"

void disp_map(Map *board)
{
	for (int i = 0; i < board->board_s; i++)
		my_puts(board->map[i]);
	my_putchar('\n');
}
