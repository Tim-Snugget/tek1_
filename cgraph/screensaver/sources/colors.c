/*
** EPITECH PROJECT, 2017
** colors.c
** File description:
** colors functions
*/

#include "scrsaver.h"

sfColor random_color(sfColor color)
{
	color.a = 255 - (rand() % 55);
	color.r = rand() % 255;
	color.g = rand() % 255;
	color.b = rand() % 255;
	return (color);
}

void new_color(color_t *clr)
{
	get_a_t(clr);
	get_r_t(clr);
	get_g_t(clr);
	get_b_t(clr);
}
