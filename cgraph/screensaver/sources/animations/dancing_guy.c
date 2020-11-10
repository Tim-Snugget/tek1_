/*
** EPITECH PROJECT, 2017
** dancing_guy.c
** File description:
** dancing guy animation
*/

#include "scrsaver.h"

void draw_smile(framebuffer_t *buffer)
{
	sfVector2i smile = {400, 165};
	sfVector2i smile2 = {400, 163};

	draw_circle(buffer, &smile, 30, sfBlack);
	draw_circle(buffer, &smile2, 30, sfWhite);
}

void belly_and_face(framebuffer_t *buffer)
{
	sfVector2i head = {400, 150};
	sfVector2i belly = {400, 300};

	draw_circle(buffer, &head, 50, sfWhite);
	draw_circle(buffer, &belly, 99, sfWhite);
	draw_smile(buffer);
	draw_eyes(buffer);
}

void body(framebuffer_t *buffer)
{
	sfVector2i leg_l = {370, 550};
	sfVector2i leg_r = {430, 550};

	while (leg_l.y != 450) {
		draw_circle(buffer, &leg_l, 5, sfWhite);
		draw_circle(buffer, &leg_r, 5, sfWhite);
		leg_l.y -= 2;
		leg_r.y -= 2;
		leg_l.x--;
		leg_r.x++;
	}
	while (leg_l.y != 350) {
		draw_circle(buffer, &leg_l, 5, sfWhite);
		draw_circle(buffer, &leg_r, 5, sfWhite);
		leg_l.x++;
		leg_l.y -= 2;
		leg_r.x--;
		leg_r.y -= 2;
	}
	belly_and_face(buffer);
}

sfColor little_rando(sfColor color)
{
	int crate = rand() % 5;

	switch (crate) {
	case 0:
		return (sfRed);
	case 1:
		return (sfCyan);
	case 2:
		return (sfMagenta);
	case 3:
		return (sfBlack);
	case 4:
		return (sfGreen);
	}
	return (color);
}

void dancing_guy(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	float a = 0;
	sfColor color = little_rando(color);
	Chrono *timer = malloc(sizeof(Chrono));

	buffer = framebuffer_create(buffer, sfBlack);
	timer->clock = sfClock_create();
	while (disp->a_id == 7) {
		timer->time = sfClock_getElapsedTime(timer->clock);
		timer->my_sec = timer->time.microseconds / 100000;
		body(buffer);
		waving_arms(buffer, a);
		a += 0.07;
		setter_disp(disp, buffer);
		if (timer->my_sec > 1.0) {
			color = little_rando(color);
			sfClock_restart(timer->clock);
		}
		framebuffer_clear(buffer, color);
	}
	sfClock_destroy(timer->clock);
	free(timer);
	free(buffer);
}
