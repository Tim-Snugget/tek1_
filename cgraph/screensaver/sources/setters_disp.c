/*
** EPITECH PROJECT, 2017
** setter_disp.c
** File description:
** set textures and sprites
*/

#include "scrsaver.h"

void set_disp(Useful *disp, int select)
{
	disp->mode.width = 800;
	disp->mode.height = 600;
	disp->mode.bitsPerPixel = 32;
	disp->window = sfRenderWindow_create(disp->mode, "my_screensavers", \
					sfDefaultStyle, NULL);
	disp->sprite = sfSprite_create();
	disp->texture = sfTexture_create(800, 600);
	disp->a_id = select;
}

void destroy_disp(Useful *disp)
{
	sfTexture_destroy(disp->texture);
	sfSprite_destroy(disp->sprite);
	sfRenderWindow_destroy(disp->window);
}


void setter_disp(Useful *disp, framebuffer_t *buffer)
{
	sfTexture_updateFromPixels(disp->texture, buffer->pixels,	\
				buffer->width, buffer->height, 0, 0);
	sfSprite_setTexture(disp->sprite, disp->texture, sfTrue);
	sfRenderWindow_drawSprite(disp->window, disp->sprite, NULL);
	sfRenderWindow_display(disp->window);
	sfRenderWindow_clear(disp->window, sfBlack);
	quit_window(disp);
}
