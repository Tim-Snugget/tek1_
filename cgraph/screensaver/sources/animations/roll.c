/*
** EPITECH PROJECT, 2017
** roll.c
** File description:
** roll animation
*/

#include "scrsaver.h"

void set_lil_balls(Roll *lil_balls)
{
	lil_balls->pos1.x = 50;
	lil_balls->pos1.y = 50;
	lil_balls->s1 = 1;
	lil_balls->pos2.x = 50;
	lil_balls->pos2.y = 550;
	lil_balls->s2 = 2;
	lil_balls->pos3.x = 750;
	lil_balls->pos3.y = 550;
	lil_balls->s3 = 3;
	lil_balls->pos4.x = 750;
	lil_balls->pos4.y = 50;
	lil_balls->s4 = 4;
	set_clr(&lil_balls->clr1);
	set_clr(&lil_balls->clr2);
	set_clr(&lil_balls->clr3);
	set_clr(&lil_balls->clr4);
}

void print_lil_balls(Roll *lil_balls, framebuffer_t *buffer)
{
	draw_circle(buffer, &lil_balls->pos1, 50, lil_balls->clr1.color);
	draw_circle(buffer, &lil_balls->pos2, 50, lil_balls->clr2.color);
	draw_circle(buffer, &lil_balls->pos3, 50, lil_balls->clr3.color);
	draw_circle(buffer, &lil_balls->pos4, 50, lil_balls->clr4.color);
}



void next_lbs(Roll *lil_balls)
{
	next_roll1(lil_balls);
	new_color(&lil_balls->clr1);
	next_roll2(lil_balls);
	new_color(&lil_balls->clr2);
	next_roll3(lil_balls);
	new_color(&lil_balls->clr3);
	next_roll4(lil_balls);
	new_color(&lil_balls->clr4);
}

void roll(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	Roll *lil_balls = malloc(sizeof(Roll));

	buffer = framebuffer_create(buffer, sfBlack);
	set_lil_balls(lil_balls);
	while (disp->a_id == 9) {
		buffer = framebuffer_clear(buffer, sfBlack);
		print_lil_balls(lil_balls, buffer);
		next_lbs(lil_balls);
		setter_disp(disp, buffer);
	}
	free (buffer);
	free (lil_balls);
}
