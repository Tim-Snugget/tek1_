/*
** EPITECH PROJECT, 2018
** score.c
** File description:
** score handling functions
*/

#include "runner.h"

void init_score(run_t *runner)
{
	sfVector2f hdr_pos = {1400, 10};
	sfVector2f val_pos = {1670, 10};

	runner->score.header = sfText_create();
	runner->score.value = sfText_create();
	runner->score.i = 0;
	sfText_setPosition(runner->score.header, hdr_pos);
	sfText_setPosition(runner->score.value, val_pos);
	runner->score.font = sfFont_createFromFile("font/progress.ttf");
	sfText_setString(runner->score.header, "SCORE: ");
	sfText_setCharacterSize(runner->score.header, 70);
	sfText_setCharacterSize(runner->score.value, 70);
	sfText_setFont(runner->score.header, runner->score.font);
	sfText_setFont(runner->score.value, runner->score.font);
	runner->score.watch.clock = sfClock_create();
}

void get_score(run_t *runner)
{
	runner->score.watch.time =					\
		sfClock_getElapsedTime(runner->score.watch.clock);
	runner->score.watch.my_sec =				\
		runner->score.watch.time.microseconds / 100000;
	if (runner->score.watch.my_sec > 3) {
		runner->score.i++;
		sfText_setString(runner->score.value,		\
				 int_to_str(runner->score.i));
		sfClock_restart(runner->score.watch.clock);
	}
}
