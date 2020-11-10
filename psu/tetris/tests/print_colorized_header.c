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
	printw("* * *\n");
	printw("  *  \n");
	printw("  *  \n");
	printw("  *  \n");
	printw("  *  \n\n");
}

void print_second_line(void)
{
	attron(COLOR_PAIR(2));
	printw("* * *\n");
	printw("*    \n");
	printw("* *  \n");
	printw("*    \n");
	printw("* * *\n\n");
}

void print_third_line(void)
{
	attron(COLOR_PAIR(3));
	printw("* * *\n");
	printw("  *  \n");
	printw("  *  \n");
	printw("  *  \n");
	printw("  *  \n\n");
}

void print_fourth_line(void)
{
	attron(COLOR_PAIR(4));
	printw("* * *\n");
	printw("*   *\n");
	printw("* *  \n");
	printw("*   *\n");
	printw("*   *\n\n");
}

void print_bottom_line(void)
{
	attron(COLOR_PAIR(5));
	printw("*\n\n*\n*\n*\n*\n");
	attron(COLOR_PAIR(6));
	printw("* * *\n");
	printw("*\n");
	printw("* * *\n");
	printw("    *\n");
	printw("* * *\n\n");
}
