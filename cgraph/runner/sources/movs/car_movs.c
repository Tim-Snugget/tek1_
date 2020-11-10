/*
** EPITECH PROJECT, 2018
** car_movs.c
** File description:
** car movements handling
*/

#include "runner.h"
#include <stdio.h>

void increm_rect(sfIntRect *rect)
{
	rect->left += 134;
	if (rect->left > 402)
		rect->left = 0;
}

void refresh_car(run_t *runner)
{
	runner->watch.time = sfClock_getElapsedTime(runner->watch.clock);
	runner->watch.my_sec = runner->watch.time.microseconds / 10000;
	if (runner->watch.my_sec > 5) {
		increm_rect(&runner->car.rect);
		sfSprite_setTextureRect(runner->car.sprite, runner->car.rect);
		sfClock_restart(runner->watch.clock);
	}
}

void move_p_car(run_t *runner)
{
	runner->obs.pos.x -= 7;
	if (runner->obs.pos.x <= -500)
		runner->obs.pos.x = 3000;
	sfSprite_setPosition(runner->obs.sprite, runner->obs.pos);
}
