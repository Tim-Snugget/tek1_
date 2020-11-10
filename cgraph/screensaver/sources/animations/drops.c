/*
** EPITECH PROJECT, 2017
** drops.c
** File description:
** drops animation
*/

#include "scrsaver.h"
#include <stdio.h>

/*void set_clock(Chrono *timer)
{
	timer->my_sec = 0;
	sfClock_create();
}
*/

sfVector2i new_position(sfVector2i drop)
{
	drop.x = rand() % 800;
	drop.y = rand() % 600;
	return (drop);
}

void new_drop(sfColor color, sfVector2i drop, framebuffer_t *buffer)
{
	color = random_color(color);
	drop = new_position(drop);
	draw_circle(buffer, &drop, rand() % 10, color);
}

void drops(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	sfVector2i drop;
	sfColor color;
	Chrono *timer = malloc(sizeof(Chrono));

	float crate = 0;

	timer->clock = sfClock_create();
	buffer = framebuffer_create(buffer, sfBlack);
	while (disp->a_id == 2) {
		timer->time = sfClock_getElapsedTime(timer->clock);
		timer->my_sec = timer->time.microseconds / 10000;
		if (timer->my_sec - crate > 1.0) {
			new_drop(color, drop, buffer);
			crate = timer->my_sec;
		}
		if (crate > 2000) {
			sfClock_restart(timer->clock);
			crate = 0;
			buffer = framebuffer_clear(buffer, sfBlack);
		}
		setter_disp(disp, buffer);
	}
	sfClock_destroy(timer->clock);
	free(timer);
	free(buffer);
}
