/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** matchstick main
*/

#include "mts.h"

int end_game(int t)
{
	if (t == 1)
		my_puts("I lost... snif.. but I'll get you next time!!");
	else if (t == 2)
		my_puts("You lost, too bad...");
	else
		return (0);
	return (t);
}

int main(int ac, char **av)
{
	Map *board;
	int t = 0;

	if (ac != 3)
		return (84);
	if (parse_args(av) == false)
		return (84);
	board = get_map(my_getnbr(av[1]));
	disp_map(board);
	while (t == 0)
		t = run_the_game(board, my_getnbr(av[2]));
	my_free_tab(board->map);
	my_free(board);
	return (end_game(t));
}
