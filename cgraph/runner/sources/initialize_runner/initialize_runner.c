/*
** EPITECH PROJECT, 2018
** initialize_runner.c
** File description:
** initalize window and runner struct
*/

#include "runner.h"

void init_env(run_t *runner)
{
	init_car(runner);
	init_police_car(runner);
	init_foreground(runner);
	init_midground(runner);
	init_background(runner);
}

void init_audio(run_t *runner)
{
	runner->music = sfMusic_createFromFile("audio/Nightcall.ogg");
	sfMusic_play(runner->music);
	sfMusic_setVolume(runner->music, 30.0);
	sfMusic_setLoop(runner->music, sfTrue);
}

void init_runner(run_t *runner)
{
	runner->mode.width = 1920;
	runner->mode.height = 1080;
	runner->mode.bitsPerPixel = 32;
	runner->window = sfRenderWindow_create(runner->mode,		\
					       "my_runner window",	\
					       sfDefaultStyle, NULL);
	init_env(runner);
	init_audio(runner);
	init_score(runner);
	runner->watch.clock = sfClock_create();
}
