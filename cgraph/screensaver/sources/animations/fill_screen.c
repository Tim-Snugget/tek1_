/*
** EPITECH PROJECT, 2017
** fill_screen.c
** File description:
** fill the screen with a growing rect
*/

#include "scrsaver.h"

void fill_the_screen(sfVector2i *pos, sfVector2i *size)
{
	size->x += 3;
	size->y += 2;
	if (pos->y != 0)
		pos->y -= 2;
	if (pos->x != 0)
		pos->x -= 3;
}

void fill_screen(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	sfColor color = random_color(color);
	sfVector2i pos = {0, 0};
	sfVector2i size = {1, 1};

	buffer = framebuffer_create(buffer, sfBlack);
	while (disp->a_id == 6) {
		draw_rect(buffer, &pos, &size, color);
		fill_the_screen(&pos, &size);
		if (size.x >= 800 && size.y >= 600) {
			size.x = 0;
			size.y = 0;
			color = random_color(color);
		}
		setter_disp(disp, buffer);
	}
	free(buffer);
}
