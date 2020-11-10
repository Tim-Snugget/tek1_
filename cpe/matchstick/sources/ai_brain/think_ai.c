/*
** EPITECH PROJECT, 2018
** think_ai.c
** File description:
** think ai, think!
*/

#include "mts.h"

Vector2i get_c1(Map *board)
{
	Vector2i opt;
	int j;

	for (opt.line = 1; opt.line <= board->size; opt.line++) {
		for (j = 0; board->map[opt.line][j] &&
			board->map[opt.line][j] != '|'; j++);
		if (board->map[opt.line][j] == '|')
			break;
	}
	for (opt.mat = 0; board->map[opt.line][j] == '|'; opt.mat++, j++);
	return (opt);
}

Vector2i get_c2(Map *board, int l1)
{
	Vector2i opt;
	int j;

	for (opt.line = l1 + 1; opt.line <= board->size; opt.line++) {
		for (j = 0; board->map[opt.line][j] &&
			board->map[opt.line][j] != '|'; j++);
		if (board->map[opt.line][j] == '|')
			break;
	}
	if (opt.line > board->size) {
		opt.line = -1;
		opt.mat = -1;
		return (opt);
	}
	for (opt.mat = 0; board->map[opt.line][j] == '|'; opt.mat++, j++);
	return (opt);
}

int kill_the_line(int nb_mat, int mat_lim)
{
	if (nb_mat <= mat_lim)
		return (nb_mat);
	else
		return (1);
}

int one_line_match(int nb_mat, int mat_lim)
{
	if (nb_mat <= mat_lim + 1) {
		if (nb_mat == 1)
			return (1);
		else
			return (nb_mat - 1);
	} else
		return (1);
}

Vector2i think_ai(Map *board, int end, int mat_lim)
{
	Vector2i opt1;
	Vector2i opt2;

	opt1 = get_c1(board);
	if (end == 1) {
		opt1.mat = one_line_match(opt1.mat, mat_lim);
		return (opt1);
	} else {
		opt2 = get_c2(board, opt1.line);
		if (opt1.mat == 1) {
			opt2.mat = kill_the_line(opt2.mat, mat_lim);
			return (opt2);
		} else if (opt2.mat == 1) {
			opt1.mat = kill_the_line(opt1.mat, mat_lim);
			return (opt1);
		}
	}
	my_puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	opt2.mat = (random() % opt2.mat) + 1;
	return (opt2);
}
