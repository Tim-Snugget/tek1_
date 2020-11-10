/*
** EPITECH PROJECT, 2017
** set_beats1to5.c
** File description:
** set beats
*/

#include "scrsaver.h"

void set_beat1(Beats *beat_1, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_1->pos_s.y = 20;
		beat_1->pos.y = 40;
	} else {
		beat_1->pos.y = rando;
		beat_1->pos_s.y = rando - 20;
	}
	beat_1->pos.x = 0;
	beat_1->pos_s.x = 0;
	beat_1->size.x = 80;
	beat_1->size.y = 600 - rando;
}

void set_beat2(Beats *beat_2, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_2->pos_s.y = 20;
		beat_2->pos.y = 40;
	} else {
		beat_2->pos.y = rando;
		beat_2->pos_s.y = rando - 20;
	}
	beat_2->pos.x = 80;
	beat_2->pos_s.x = 80;
	beat_2->size.x = 80;
	beat_2->size.y = 600 - rando;
}

void set_beat3(Beats *beat_3, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_3->pos_s.y = 20;
		beat_3->pos.y = 40;
	} else {
		beat_3->pos.y = rando;
		beat_3->pos_s.y = rando - 20;
	}
	beat_3->pos.x = 160;
	beat_3->pos_s.x = 160;
	beat_3->size.x = 80;
	beat_3->size.y = 600 - rando;
}

void set_beat4(Beats *beat_4, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_4->pos_s.y = 20;
		beat_4->pos.y = 40;
	} else {
		beat_4->pos.y = rando;
		beat_4->pos_s.y = rando - 20;
	}
	beat_4->pos.x = 240;
	beat_4->pos_s.x = 240;
	beat_4->size.x = 80;
	beat_4->size.y = 600 - rando;
}

void set_beat5(Beats *beat_5, sfVector2i *size_s)
{
	int rando = rand() % 600;

	if (rando % 2 == 1)
		rando--;
	if (rando < 20) {
		beat_5->pos_s.y = 20;
		beat_5->pos.y = 40;
	} else {
		beat_5->pos.y = rando;
		beat_5->pos_s.y = rando - 20;
	}
	beat_5->pos.x = 320;
	beat_5->pos_s.x = 320;
	beat_5->size.x = 80;
	beat_5->size.y = 600 - rando;
}
