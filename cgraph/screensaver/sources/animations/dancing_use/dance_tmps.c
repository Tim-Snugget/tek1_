/*
** EPITECH PROJECT, 2017
** dancing_tmps.c
** File description:
** dancing add functions
*/

#include "scrsaver.h"

void waving_arms(framebuffer_t *buffer, float a)
{
	sfVector2i l_arm;
	sfVector2i r_arm;

	l_arm.x = 370;
	r_arm.x = 430;
	l_arm.y = 260;
	r_arm.y = 260;
	while (l_arm.x != 99) {
		draw_circle(buffer, &l_arm, 5, sfWhite);
		draw_circle(buffer, &r_arm, 5, sfWhite);
		l_arm.y = (260 + 260 * sin(a)) / 4 + 220;
		r_arm.y = (260 + 260 * sin(-a)) / 4 + 220;
		l_arm.x--;
		r_arm.x++;
		a += 0.07;
	}
}

void draw_eyes(framebuffer_t *buffer)
{
	sfVector2i l_eye = {368, 140};
	sfVector2i l2_eye = {368, 142};
	sfVector2i r_eye = {432, 140};
	sfVector2i r2_eye = {432, 142};

	draw_circle(buffer, &l_eye, 10, sfBlack);
	draw_circle(buffer, &l2_eye, 10, sfWhite);
	draw_circle(buffer, &r_eye, 10, sfBlack);
	draw_circle(buffer, &r2_eye, 10, sfWhite);
}
