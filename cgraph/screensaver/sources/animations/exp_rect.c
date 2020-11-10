/*
** EPITECH PROJECT, 2017
** exp_rects.c
** File description:
** expansive rectangles
*/

#include "scrsaver.h"

void set_rects(Rectangles *rects)
{
	rects->rt1.size.x = 200;
	rects->rt1.size.y = 150;
	rects->rt1.pos.x = 100;
	rects->rt1.pos.y = 100;
	rects->rt3.size.x = 200;
	rects->rt3.size.y = 150;
	rects->rt3.pos.x = 500;
	rects->rt3.pos.y = 400;
	rects->rt2.size.x = 400;
	rects->rt2.size.y = 300;
	rects->rt2.pos.x = 400;
	rects->rt2.pos.y = 0;
	rects->rt4.size.x = 400;
	rects->rt4.size.y = 300;
	rects->rt4.pos.x = 0;
	rects->rt4.pos.y = 300;
}

void mini_increm(Rectangles *rects)
{
	rects->rt1.size.x += 2;
	rects->rt1.size.y += 2;
	rects->rt1.pos.x--;
	rects->rt1.pos.y--;
	rects->rt3.size.x += 2;
	rects->rt3.size.y += 2;
	rects->rt3.pos.x--;
	rects->rt3.pos.y--;
	rects->rt2.pos.x++;
	rects->rt2.pos.y++;
	rects->rt2.size.x -= 2;
	rects->rt2.size.y -= 2;
	rects->rt4.pos.x++;
	rects->rt4.pos.y++;
	rects->rt4.size.x -= 2;
	rects->rt4.size.y -= 2;
}

void mini_decrem(Rectangles *rects)
{
	rects->rt1.size.x -= 2;
	rects->rt1.size.y -= 2;
	rects->rt1.pos.x++;
	rects->rt1.pos.y++;
	rects->rt3.size.x -= 2;
	rects->rt3.size.y -= 2;
	rects->rt3.pos.x++;
	rects->rt3.pos.y++;
	rects->rt2.pos.x--;
	rects->rt2.pos.y--;
	rects->rt2.size.x += 2;
	rects->rt2.size.y += 2;
	rects->rt4.pos.x--;
	rects->rt4.pos.y--;
	rects->rt4.size.x += 2;
	rects->rt4.size.y += 2;
}

int new_rects(Rectangles *rects, int mem)
{
	if (mem == -1) {
		if (rects->rt1.size.x <= 200) {
			mem = 1;
			mini_increm(rects);
		} else
			mini_decrem(rects);
	} else if (mem == 1) {
		if (rects->rt1.size.x >= 400) {
			mem = -1;
			mini_decrem(rects);
		} else
			mini_increm(rects);
	}
	return (mem);
}

void exp_rects(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	Rectangles *rects = malloc(sizeof(Rectangles));
	int mem = 1;

	buffer = framebuffer_create(buffer, sfBlack);
	set_rects(rects);
	while (disp->a_id == 5) {
		mem = new_rects(rects, mem);
		framebuffer_clear(buffer, sfBlack);
		draw_rect(buffer, &rects->rt1.pos, &rects->rt1.size, sfBlue);
		draw_rect(buffer, &rects->rt3.pos, &rects->rt3.size, sfBlue);
		draw_rect(buffer, &rects->rt2.pos, &rects->rt2.size, sfBlue);
		draw_rect(buffer, &rects->rt4.pos, &rects->rt4.size, sfBlue);
		setter_disp(disp, buffer);
	}
	free(buffer);
	free(rects);
}
