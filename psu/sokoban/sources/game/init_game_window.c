/*
** EPITECH PROJECT, 2018
** sokoban.c
** File description:
** init the game window
*/

#include "sokoban.h"

WINDOW *init_game_window(void)
{
	WINDOW *wdw = initscr();

	cbreak();
	keypad(wdw, 1);
	curs_set(0);
	noecho();
	return (wdw);
}
