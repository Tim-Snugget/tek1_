/*
** EPITECH PROJECT, 2017
** new_colors.c
** File description:
** special handling for new colors
*/

#include "scrsaver.h"

void set_clr(color_t *clr)
{
	clr->color = random_color(clr->color);
	clr->a_t = 1;
	clr->r_t = 1;
	clr->g_t = 1;
	clr->b_t = 1;
}

void get_a_t(color_t *clr)
{
	if (clr->a_t == 1) {
		if (clr->color.a == 255) {
			clr->a_t = -1;
			clr->color.a--;
		} else
			clr->color.a++;
	}
	if (clr->a_t == -1) {
		if (clr->color.a == 195) {
			clr->a_t = 1;
			clr->color.a++;
		} else
			clr->color.a--;
	}
}

void get_r_t(color_t *clr)
{
	if (clr->r_t == 1) {
		if (clr->color.r == 255) {
			clr->r_t = -1;
			clr->color.r--;
		} else
			clr->color.r++;
	}
	if (clr->r_t == -1) {
		if (clr->color.r <= 100) {
			clr->r_t = 1;
			clr->color.r++;
		} else
			clr->color.r--;
	}
}

void get_g_t(color_t *clr)
{
	if (clr->g_t == 1) {
		if (clr->color.g >= 255) {
			clr->g_t = -1;
			clr->color.g--;
		} else
			clr->color.g++;
	}
	if (clr->g_t == -1) {
		if (clr->color.g <= 0) {
			clr->g_t = 1;
			clr->color.g++;
		} else
			clr->color.g--;
	}
}

void get_b_t(color_t *clr)
{
	if (clr->b_t == 1) {
		if (clr->color.b >= 255) {
			clr->b_t = -1;
			clr->color.b--;
		} else
			clr->color.b++;
	}
	if (clr->b_t == -1) {
		if (clr->color.b <= 175) {
			clr->b_t = 1;
			clr->color.b++;
		} else
			clr->color.b--;
	}
}
