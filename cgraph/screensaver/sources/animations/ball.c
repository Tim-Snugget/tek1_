/*
** EPITECH PROJECT, 2017
** ball.c
** File description:
** ball scrsaver
*/

#include "scrsaver.h"

int ball_animated(balls_coords *ball, int tor)
{
	if (tor == 1) {
		if (ball->b1.x >= 750) {
			tor = -1;
			decrem_balls(ball);
		} else 
			increm_balls(ball);
	} else if (tor == -1) {
		if (ball->b1.x <= 50) {
			tor = 1;
			increm_balls(ball);
		} else
			decrem_balls(ball);
	}
	return (tor);
}

void draw_balls(color_t *clr, balls_coords *ball,	\
		framebuffer_t *buffer)
{

	draw_circle(buffer, &ball->b1, 60, clr->color);
	draw_circle(buffer, &ball->b2, 60, clr->color);
	draw_circle(buffer, &ball->b3, 60, clr->color);
	draw_circle(buffer, &ball->b4, 60, clr->color);
	draw_circle(buffer, &ball->b5, 60, clr->color);
}

void set_balls(balls_coords *ball)
{
	ball->b1.y = 60;
	ball->b3.y = 300;
	ball->b5.y = 540;
	ball->b2.y = 180;
	ball->b4.y = 420;
	ball->b1.x = 50;
	ball->b3.x = 50;
	ball->b5.x = 50;
	ball->b2.x = 750;
	ball->b4.x = 750;
}

void ball(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	balls_coords ball;
	int tor = 1;
	color_t clr;

	set_balls(&ball);
	set_clr(&clr);
	buffer = framebuffer_create(buffer, sfBlack);
	while (disp->a_id == 1) {
		new_color(&clr);
		draw_balls(&clr, &ball, buffer);
		tor = ball_animated(&ball, tor);
		setter_disp(disp, buffer);
		buffer = framebuffer_clear(buffer, sfBlack);
	}
	free (buffer);
}

/*
void ball(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	sfVector2i ball;
	int tor = 1;
	int r_tor = -1;
	color_t clr;

	set_ball_init(&ball);
	set_clr(&clr);
	buffer = framebuffer_create(buffer, sfBlack);
	while (disp->a_id == 1) {
	new_color(&clr);
		draw_balls(&clr, buffer);
		draw_circle(buffer, &ball, 50, clr.color);
		tor = ball_animated(&ball, tor);
		r_tor = -tor;
		sfRenderWindow_clear(disp->window, sfGreen);
		setter_disp(disp, buffer);
		buffer = framebuffer_clear(buffer, sfBlack);
	}
	free (buffer);
}
*/
