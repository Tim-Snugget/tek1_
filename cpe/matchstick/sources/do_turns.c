/*
** EPITECH PROJECT, 2018
** do_turns.c
** File description:
** modify the map with my parameters // execute_turns
*/

#include "mts.h"

int player_s_turn(Map *board, int mat_lim)
{
	Vector2i turn;

	turn.line = -1;
	while (turn.line == -1) {
		turn.line = get_chosen_line(board->size);
		if (turn.line == -2)
			return (-1);
		if (turn.line != -1 &&
		(turn.mat = get_chosen_match(mat_lim, board->map[turn.line]))
		== -1)
			turn.line = -1;
		else if (turn.mat == -2)
			return (-1);
	}
	mod_map(board->map[turn.line], turn.mat, board->max_w);
	disp_turn(turn, 1);
	disp_map(board);
	return (0);
}

void ai_s_turn(Map *board, int mat_lim)
{
	Vector2i turn;
	int end;

	my_puts("AI's turn...");
	end = close_end(board);
	if (end <= 2) {
		turn = think_ai(board, end, mat_lim);
	} else {
		turn.line = (random() % board->size) + 1;
		while ((turn.mat = remaining_matches(board->map[turn.line]))
		== 0)
			turn.line = (random() % board->size) + 1;
		turn.mat = get_smallest(turn.mat, mat_lim);
		turn.mat = (random() % turn.mat) + 1;
	}
	disp_turn(turn, 2);
	mod_map(board->map[turn.line], turn.mat, board->max_w);
	disp_map(board);
}

void mod_map(char *map_row, int mat, int max_w)
{
	int i;

	for (i = max_w; map_row[i] != '|'; i--);
	for (int j = 0; j < mat; j++, i--)
		map_row[i] = ' ';
}
