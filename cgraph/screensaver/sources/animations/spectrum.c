/*
** EPITECH PROJECT, 2017
** spectrum.c
** File description:
** spectrum animation
*/

#include "scrsaver.h"

void print_spectrum(framebuffer_t *buffer, color_t *clr, sfVector2i *pos)
{
	sfVector2i size = {1, 600};

	if (pos->x != 799) {
		pos->x++;
		draw_rect(buffer, pos, &size, clr->color);
		if (pos->x % 2 == 0)
			new_color(clr);
	}
}

void reset_anim(color_t *clr, Chrono *timer, sfVector2i *pos,	\
		framebuffer_t *buffer)
{
	clr->color = random_color(clr->color);
	pos->x = 0;
	framebuffer_clear(buffer, sfBlack);
	sfClock_restart(timer->clock);
}

void spectrum(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	color_t *clr = malloc(sizeof(color_t));
	Chrono *timer = malloc(sizeof(Chrono));
	sfVector2i pos = {0, 0};

	buffer = framebuffer_create(buffer, sfBlack);
	set_clr(clr);
	timer->clock = sfClock_create();
	while (disp->a_id == 8) {
		print_spectrum(buffer, clr, &pos);
		timer->time = sfClock_getElapsedTime(timer->clock);
		timer->my_sec = timer->time.microseconds / 1000000;
		if (timer->my_sec > 5.0)
			reset_anim(clr, timer, &pos, buffer);
		setter_disp(disp, buffer);
	}
	sfClock_destroy(timer->clock);
	free (timer);
	free (clr);
	free (buffer);
}		
