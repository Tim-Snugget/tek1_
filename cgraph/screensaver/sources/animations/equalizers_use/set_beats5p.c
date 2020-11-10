/*
** EPITECH PROJECT, 2017
** set_beats5p.c
** File description:
** set beats
*/

#include "scrsaver.h"

void set_beat6(Beats *beat_6, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_6->pos_s.y = 20;
		beat_6->pos.y = 40;
	} else {
		beat_6->pos.y = rando;
		beat_6->pos_s.y = rando - 20;
	}
	beat_6->pos.x = 400;
	beat_6->pos_s.x = 400;
	beat_6->size.x = 80;
	beat_6->size.y = 600 - rando;
}

void set_beat7(Beats *beat_7, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_7->pos_s.y = 20;
		beat_7->pos.y = 40;
	} else {
		beat_7->pos.y = rando;
		beat_7->pos_s.y = rando - 20;
	}
	beat_7->pos.x = 480;
	beat_7->pos_s.x = 480;
	beat_7->size.x = 80;
	beat_7->size.y = 600 - rando;
}

void set_beat8(Beats *beat_8, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_8->pos_s.y = 20;
		beat_8->pos.y = 40;
	} else {
		beat_8->pos.y = rando;
		beat_8->pos_s.y = rando - 20;
	}
	beat_8->pos.x = 560;
	beat_8->pos_s.x = 560;
	beat_8->size.x = 80;
	beat_8->size.y = 600 - rando;
}

void set_beat9(Beats *beat_9, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_9->pos_s.y = 20;
		beat_9->pos.y = 40;
	} else {
		beat_9->pos.y = rando;
		beat_9->pos_s.y = rando - 20;
	}
	beat_9->pos.x = 640;
	beat_9->pos_s.x = 640;
	beat_9->size.x = 80;
	beat_9->size.y = 600 - rando;
}

void set_beat10(Beats *beat_10, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_10->pos_s.y = 20;
		beat_10->pos.y = 40;
	} else {
		beat_10->pos.y = rando;
		beat_10->pos_s.y = rando - 20;
	}
	beat_10->pos.x = 720;
	beat_10->pos_s.x = 720;
	beat_10->size.x = 80;
	beat_10->size.y = 600 - rando;
}
