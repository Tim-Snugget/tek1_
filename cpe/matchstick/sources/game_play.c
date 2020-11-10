/*
** EPITECH PROJECT, 2018
** game_play.c
** File description:
** game loop is playing
*/

#include "mts.h"

int run_the_game(Map *board, int mat_lim)
{
	my_puts("Your turn:");
	if (player_s_turn(board, mat_lim) == -1)
		return (-1);
	if (is_game_over(board) == true)
		return (2);
	ai_s_turn(board, mat_lim);
	if (is_game_over(board) == true)
		return (1);
	return (0);
}
