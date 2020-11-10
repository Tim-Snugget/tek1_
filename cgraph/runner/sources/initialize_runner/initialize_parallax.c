/*
** EPITECH PROJECT, 2018
** init_parallax.c
** File description:
** initialize parallax
*/

#include "runner.h"

void init_foreground(run_t *runner)
{
	sfVector2f forg_pos = {0, 450};

	runner->forg.texture = sfTexture_createFromFile("pics/fg.png", NULL);
	runner->forg.sprite = sfSprite_create();
	sfSprite_setTexture(runner->forg.sprite, runner->forg.texture, sfTrue);
	sfSprite_setPosition(runner->forg.sprite, forg_pos);
	runner->forg.offset.x = -6.5;
	runner->forg.offset.y = 0;
}

void init_midground(run_t *runner)
{
	sfVector2f midg_pos = {0, 30};

	runner->midg.texture = sfTexture_createFromFile("pics/mg.png", NULL);
	runner->midg.sprite = sfSprite_create();
	sfSprite_setTexture(runner->midg.sprite, runner->midg.texture, sfTrue);
	sfSprite_setPosition(runner->midg.sprite, midg_pos);
	runner->midg.offset.x = -1;
	runner->midg.offset.y = 0;
}

void init_background(run_t *runner)
{
	runner->bakg.texture = sfTexture_createFromFile("pics/bg.png", NULL);
	runner->bakg.sprite = sfSprite_create();
	sfSprite_setTexture(runner->bakg.sprite, runner->bakg.texture, sfTrue);
	runner->bakg.offset.x = -0.5;
	runner->bakg.offset.y = 0;
}
