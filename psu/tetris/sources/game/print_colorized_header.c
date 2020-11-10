/*
** EPITECH PROJECT, 2018
** print_colorized_header.c
** File description:
** print a colorized header, displaying "TETRIS" wow so much
*/

#include "tetris.h"

void print_top_line(void)
{
	attron(COLOR_PAIR(1));
	printw("* * * ");
	attron(COLOR_PAIR(2));
	printw("* * * ");
	attron(COLOR_PAIR(3));
	printw("* * * ");
	attron(COLOR_PAIR(4));
	printw("* * * ");
	attron(COLOR_PAIR(5));
	printw("* ");
	attron(COLOR_PAIR(6));
	printw("* * * \n");
}

void print_second_line(void)
{
	attron(COLOR_PAIR(1));
	printw("  *   ");
	attron(COLOR_PAIR(2));
	printw("*     ");
	attron(COLOR_PAIR(3));
	printw("  *   ");
	attron(COLOR_PAIR(4));
	printw("*   * ");
	attron(COLOR_PAIR(5));
	printw("  ");
	attron(COLOR_PAIR(6));
	printw("*     \n");
}

void print_third_line(void)
{
	attron(COLOR_PAIR(1));
	printw("  *   ");
	attron(COLOR_PAIR(2));
	printw("* *   ");
	attron(COLOR_PAIR(3));
	printw("  *   ");
	attron(COLOR_PAIR(4));
	printw("* * * ");
	attron(COLOR_PAIR(5));
	printw("* ");
	attron(COLOR_PAIR(6));
	printw("* * * \n");
}

void print_fourth_line(void)
{
	attron(COLOR_PAIR(1));
	printw("  *   ");
	attron(COLOR_PAIR(2));
	printw("*     ");
	attron(COLOR_PAIR(3));
	printw("  *   ");
	attron(COLOR_PAIR(4));
	printw("* *   ");
	attron(COLOR_PAIR(5));
	printw("* ");
	attron(COLOR_PAIR(6));
	printw("    * \n");
}

void print_bottom_line(void)
{
	attron(COLOR_PAIR(1));
	printw("  *   ");
	attron(COLOR_PAIR(2));
	printw("* * * ");
	attron(COLOR_PAIR(3));
	printw("  *   ");
	attron(COLOR_PAIR(4));
	printw("*   * ");
	attron(COLOR_PAIR(5));
	printw("* ");
	attron(COLOR_PAIR(6));
	printw("* * * \n");
}
