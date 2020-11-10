/*
** EPITECH PROJECT, 2018
** car_jump.c
** File description:
** car jump handling functions
*/

#include "runner.h"

void j_loop(run_t *runner)
{
	jump_car(runner);
	move_parallax(runner);
	move_p_car(runner);
	get_score(runner);
	window_displayer(runner);
	quit_window(runner);
}

void car_jump(run_t *runner)
{
	while (runner->car.pos.y > 590) {
		runner->car.pos.y -= 2;
		sfSprite_setPosition(runner->car.sprite, runner->car.pos);
		j_loop(runner);
	}
	while (runner->car.pos.y > 560) {
		runner->car.pos.y--;
		sfSprite_setPosition(runner->car.sprite, runner->car.pos);
		j_loop(runner);
	}
	while (runner->car.pos.y != 800) {
		runner->car.pos.y += 3;
		sfSprite_setPosition(runner->car.sprite, runner->car.pos);
		j_loop(runner);
	}
}

void jump_car(run_t *runner)
{
	if (runner->car.pos.y > 770) {
		runner->car.rect.left = 536;
		sfSprite_setTextureRect(runner->car.sprite, runner->car.rect);
	} else {
		runner->car.rect.left = 670;
		sfSprite_setTextureRect(runner->car.sprite, runner->car.rect);
	}
}
