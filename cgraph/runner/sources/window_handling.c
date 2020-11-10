/*
** EPITECH PROJECT, 2018
** window_handling.c
** File description:
** disp or leave the runner
*/

#include "runner.h"

void window_displayer(run_t *runner)
{
	sfRenderWindow_clear(runner->window, sfBlack);
	sfRenderWindow_drawSprite(runner->window, runner->bakg.sprite, NULL);
	sfRenderWindow_drawSprite(runner->window, runner->midg.sprite, NULL);
	sfRenderWindow_drawSprite(runner->window, runner->forg.sprite, NULL);
	sfRenderWindow_drawSprite(runner->window, runner->car.sprite, NULL);
	sfRenderWindow_drawSprite(runner->window, runner->obs.sprite, NULL);
	sfRenderWindow_drawText(runner->window, runner->score.header, NULL);
	sfRenderWindow_drawText(runner->window, runner->score.value, NULL);
	sfRenderWindow_display(runner->window);
}

void quit_window(run_t *runner)
{
	while (sfRenderWindow_pollEvent(runner->window, &runner->evt))
		if (runner->evt.type == sfEvtClosed)
			sfRenderWindow_close(runner->window);
}

void event(run_t *runner)
{
	while (sfRenderWindow_pollEvent(runner->window, &runner->evt)) {
		if (runner->evt.type == sfEvtClosed)
			sfRenderWindow_close(runner->window);
		else if (runner->evt.type == sfEvtKeyPressed && \
			 runner->evt.key.code == sfKeySpace) {
			car_jump(runner);
		}
	}
}

void destroy_runner(run_t *runner)
{
	sfTexture_destroy(runner->car.texture);
	sfTexture_destroy(runner->obs.texture);
	sfTexture_destroy(runner->forg.texture);
	sfTexture_destroy(runner->midg.texture);
	sfTexture_destroy(runner->bakg.texture);
	sfSprite_destroy(runner->car.sprite);
	sfSprite_destroy(runner->obs.sprite);
	sfSprite_destroy(runner->forg.sprite);
	sfSprite_destroy(runner->midg.sprite);
	sfSprite_destroy(runner->bakg.sprite);
	sfClock_destroy(runner->watch.clock);
	sfClock_destroy(runner->score.watch.clock);
	sfMusic_destroy(runner->music);
	sfText_destroy(runner->score.header);
	sfText_destroy(runner->score.value);
	sfFont_destroy(runner->score.font);
	sfRenderWindow_destroy(runner->window);
}
