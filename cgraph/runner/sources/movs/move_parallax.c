/*
** EPITECH PROJECT, 2018
** move_parallax.c
** File description:
** parallax movements handling
*/

#include "runner.h"

void fill_the_crate(Vector3f *crate, run_t *runner)
{
	crate->a += runner->forg.offset.x;
	crate->b += runner->midg.offset.x;
	crate->c += runner->bakg.offset.x;
}

void move_parallax(run_t *runner)
{
	static Vector3f crate = {0, 0, 0};
	static sfVector2f reset = {3840, 0};

	fill_the_crate(&crate, runner);
	if (crate.a < -3840) {
		crate.a = 0;
		sfSprite_move(runner->forg.sprite, reset);
	}else
		sfSprite_move(runner->forg.sprite, runner->forg.offset);
	if (crate.b < -3840) {
		crate.b = 0;
		sfSprite_move(runner->midg.sprite, reset);
	} else
		sfSprite_move(runner->midg.sprite, runner->midg.offset);
	if (crate.c < -3840) {
		crate.c = 0;
		sfSprite_move(runner->bakg.sprite, reset);
	} else
		sfSprite_move(runner->bakg.sprite, runner->bakg.offset);
}
