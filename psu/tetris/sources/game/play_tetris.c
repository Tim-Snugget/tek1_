/*
** EPITECH PROJECT, 2018
** play_tetris.c
** File description:
** play my tetris
*/

#include "tetris.h"

void print_colorized_header(void)
{
	set_color_pairs();
	print_top_line();
	print_second_line();
	print_third_line();
	print_fourth_line();
	print_bottom_line();
	attron(COLOR_PAIR(7));
}

void display_ncurses(game_t *commands)
{
	int key = 0;

	initscr();
	curs_set(0);
	start_color();
	noecho();
	while (key != commands->quit_k) {
		clear();
		print_colorized_header();
		print_map(commands->map_col, commands->map_row);
		key = getch();
	}
	refresh();
	endwin();
}

int play_tetris(game_t *commands)
{
	int i = &i;
	container_t *container = stock_and_save_tetriminos();

	if (container == NULL)
		return (84);
	if (container == NULL || check_datas(commands) == false)
		return (84);
	if (i < 0)
		i *= -1;
	srand(i);
	i = (rand() % container->nb_tetri);
	get_rdm_tetri(i, container);
	display_ncurses(commands);
	return (0);
}
