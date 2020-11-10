/*
** EPITECH PROJECT, 2018
** minor_functions.c
** File description:
** little stuff
*/

#include "mts.h"

void print_match_error(int mat, int mat_lim)
{
	if (mat <= 0)
		my_puterr("you have to release at least one match");
	else {
		my_putstr("Error: you cannot remove more than ");
		my_putnbr(mat_lim);
		my_puts(" matches per turn");
	}
}

int get_smallest(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

void disp_turn(Vector2i turn, int select_p)
{
	if (select_p == 1)
		my_putstr("Player ");
	else
		my_putstr("AI ");
	my_putstr("removed ");
	my_putnbr(turn.mat);
	my_putstr(" match(es) from line ");
	my_putnbr(turn.line);
	my_putchar('\n');
}
