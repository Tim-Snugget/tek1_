/*
** EPITECH PROJECT, 2018
** check_datas.c
** File description:
** check every datas of the game before starting it
*/

#include "tetris.h"

bool check_datas(game_t *commands)
{
	int x;
	int y;
	WINDOW *win;

	win = initscr();
	getmaxyx(win, x, y);
	if (x < commands->map_col || y < commands->map_row) {
		endwin();
		return (false);
	}
	endwin();
	return (true);
}
