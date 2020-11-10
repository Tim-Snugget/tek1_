/*
** EPITECH PROJECT, 2017
** equalizers.c
** File description:
** equalizers functions
*/

#include "scrsaver.h"

void set_pulses(Pulses *beats)
{
	beats->size_s.x = 80;
	beats->size_s.y = 10;
	set_beat1(&beats->beat_1, &beats->size_s);
	set_beat2(&beats->beat_2, &beats->size_s);
	set_beat3(&beats->beat_3, &beats->size_s);
	set_beat4(&beats->beat_4, &beats->size_s);
	set_beat5(&beats->beat_5, &beats->size_s);
	set_beat6(&beats->beat_6, &beats->size_s);
	set_beat7(&beats->beat_7, &beats->size_s);
	set_beat8(&beats->beat_8, &beats->size_s);
	set_beat9(&beats->beat_9, &beats->size_s);
	set_beat10(&beats->beat_10, &beats->size_s);
}

void draw_pulses(Pulses *beats, framebuffer_t *buffer)
{
	draw_equ(buffer, &beats->beat_1.pos, &beats->beat_1.size, sfMagenta);
	draw_rect(buffer, &beats->beat_1.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_2.pos, &beats->beat_2.size, sfMagenta);
	draw_rect(buffer, &beats->beat_2.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_3.pos, &beats->beat_3.size, sfMagenta);
	draw_rect(buffer, &beats->beat_3.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_4.pos, &beats->beat_4.size, sfMagenta);
	draw_rect(buffer, &beats->beat_4.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_5.pos, &beats->beat_5.size, sfMagenta);
	draw_rect(buffer, &beats->beat_5.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_6.pos, &beats->beat_6.size, sfMagenta);
	draw_rect(buffer, &beats->beat_6.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_7.pos, &beats->beat_7.size, sfMagenta);
	draw_rect(buffer, &beats->beat_7.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_8.pos, &beats->beat_8.size, sfMagenta);
	draw_rect(buffer, &beats->beat_8.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_9.pos, &beats->beat_9.size, sfMagenta);
	draw_rect(buffer, &beats->beat_9.pos_s, &beats->size_s, sfCyan);
	draw_equ(buffer, &beats->beat_10.pos, &beats->beat_10.size, sfMagenta);
	draw_rect(buffer, &beats->beat_10.pos_s, &beats->size_s, sfCyan);
}

void restart_equa(framebuffer_t *buffer, Pulses *beats, Chrono *timer)
{
	buffer = framebuffer_clear(buffer, sfBlack);
	set_pulses(beats);
	sfClock_restart(timer->clock);
}

void equalizers(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	Chrono *timer = malloc(sizeof(Chrono));
	Pulses *beats = malloc(sizeof(Pulses));

	timer->clock = sfClock_create();
	buffer = framebuffer_create(buffer, sfBlack);
	set_pulses(beats);
	while (disp->a_id == 4) {
		timer->time = sfClock_getElapsedTime(timer->clock);
		timer->my_ten_s = timer->time.microseconds / 100000;
		setter_disp(disp, buffer);
		draw_pulses(beats, buffer);
		if (timer->my_ten_s > 3)
			restart_equa(buffer, beats, timer);
	}
	sfClock_destroy(timer->clock);
	free(timer);
	free(beats);
	free(buffer);
}
