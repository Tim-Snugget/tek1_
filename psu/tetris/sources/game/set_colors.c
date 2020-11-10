/*
** EPITECH PROJECT, 2018
** set_colors.c
** File description:
** set the different pairs of colors
*/

#include "tetris.h"

void set_color_pairs(void)
{
	init_color(COLOR_WHITE, 1000, 1000, 1000);
	init_color(COLOR_RED, 1000, 0, 0);
	init_color(COLOR_CYAN, 0, 1000, 1000);
	init_color(COLOR_YELLOW, 1000, 1000, 0);
	init_color(COLOR_GREEN, 0, 1000, 0);
	init_color(COLOR_BLUE, 0, 0, 1000);
	init_color(COLOR_MAGENTA, 1000, 0, 1000);
	init_pair(1, COLOR_RED, use_default_colors());
	init_pair(2, COLOR_CYAN, use_default_colors());
	init_pair(3, COLOR_YELLOW, use_default_colors());
	init_pair(4, COLOR_GREEN, use_default_colors());
	init_pair(5, COLOR_BLUE, use_default_colors());
	init_pair(6, COLOR_MAGENTA, use_default_colors());
	init_pair(7, COLOR_WHITE, use_default_colors());
}
