/*
** EPITECH PROJECT, 2018
** init_cars.c
** File description:
** initialize cars
*/

#include "runner.h"

void init_car(run_t *runner)
{
	sfVector2f new_size = {3, 3};

	runner->car.texture = sfTexture_createFromFile("pics/dlr_ss.png", NULL);
	runner->car.sprite = sfSprite_create();
	runner->car.rect.top = 0;
	runner->car.rect.left = 0;
	runner->car.rect.width = 134;
	runner->car.rect.height = 44;
	sfSprite_setTexture(runner->car.sprite, runner->car.texture, sfTrue);
	sfSprite_setTextureRect(runner->car.sprite, runner->car.rect);
	runner->car.pos.x = 200;
	runner->car.pos.y = 800;
	sfSprite_setPosition(runner->car.sprite, runner->car.pos);
	sfSprite_setScale(runner->car.sprite, new_size);
}

void init_police_car(run_t *runner)
{
	sfVector2f new_size = {1.3, 1.3};

	runner->obs.texture = sfTexture_createFromFile("pics/p_car.png", NULL);
	runner->obs.sprite = sfSprite_create();
	runner->obs.rect.top = 0;
	runner->obs.rect.left = 0;
	runner->obs.rect.width = 324;
	runner->obs.rect.height = 105;
	sfSprite_setTexture(runner->obs.sprite, runner->obs.texture, sfTrue);
	sfSprite_setTextureRect(runner->obs.sprite, runner->obs.rect);
	runner->obs.pos.x = 1700;
	runner->obs.pos.y = 800;
	sfSprite_setPosition(runner->obs.sprite, runner->obs.pos);
	sfSprite_setScale(runner->obs.sprite, new_size);
}
