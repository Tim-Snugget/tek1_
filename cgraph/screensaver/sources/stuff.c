/*
** EPITECH PROJECT, 2017
** stuff.c
** File description:
** some stuff there to draw shapes
*/

#include "scrsaver.h"

void draw_rect(framebuffer_t *buffer, sfVector2i *pos, sfVector2i *size, \
	       sfColor color)
{
	int cnt = 0;
	int tmp_y = pos->y;

	while (tmp_y - pos->y < size->y) {
		while (cnt != size->x && tmp_y >= 0 && pos->x + cnt >= 0) {
			my_put_pixel(buffer, pos->x + cnt, tmp_y, color);
			cnt++;
		}
		cnt = 0;
		tmp_y++;
	}
}

void draw_equ(framebuffer_t *buffer, sfVector2i *pos, sfVector2i *size, \
	      sfColor color)
{
	int cnt = 0;
	int crate = pos->y;

	while (crate - pos->y < size->y) {
		while (cnt < size->x) {
			if (pos->x + cnt >= 0 && pos->x + cnt < buffer->width \
			    && crate >= 0 && crate < buffer->height)
				my_put_pixel(buffer, pos->x + cnt, crate, \
					     color);
			cnt++;
		}
		cnt = 0;
		crate += 10;
	}
}

void draw_circle(framebuffer_t *buffer, sfVector2i *center,	\
		 int radius, sfColor color)
{
	int y = center->y - radius;
	int x = center->x - radius;

	while (y <= center->y + radius) {
		while (x <= center->x + radius) {
			if (((x - center->x) * (x - center->x) +	\
			     (y - center->y) * (y - center->y)) <=	\
			    (radius * radius) && x < buffer->width &&	\
			    x + radius > 0 && y >= 0 && y < buffer->height)
				my_put_pixel(buffer, x,	y, color);
			x++;
		}
		x = center->x - radius;
		y++;
	}
}

void my_put_pixel(framebuffer_t *buffer, unsigned int x,        \
                  unsigned int y, sfColor color)
{
	unsigned int l = (y * buffer->width + x) * 4;

	buffer->pixels[l] = color.r;
	buffer->pixels[l + 1] = color.g;
	buffer->pixels[l + 2] = color.b;
	buffer->pixels[l + 3] = color.a;
}
