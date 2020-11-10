/*
** EPITECH PROJECT, 2017
** hoop.c
** File description:
** hoop scrsaver
*/

#include "scrsaver.h"

void set_hoops(hoops_t *hoops)
{
	hoops->hoop.x = 400 + 300 * sin(hoops->a);
	hoops->hoop.y = 300 + 275 * cos(hoops->a);
	hoops->med_hoop.x = 400 + 175 * sin(-hoops->a);
	hoops->med_hoop.y = 300 + 175 * cos(-hoops->a);
	hoops->point.x = 400 + 50 * sin(hoops->a);
	hoops->point.y = 300 + 50 * cos(hoops->a);
	hoops->point2.x = 400 + 50 * -sin(hoops->a);
	hoops->point2.y = 300 + 50 * -cos(hoops->a);
	hoops->a += 0.01;
}

void draw_hoops(hoops_t *hoops, framebuffer_t *buffer, color_t *clr)
{
	draw_circle(buffer, &hoops->hoop, 5, clr->color);
	draw_circle(buffer, &hoops->med_hoop, 2, clr->color);
	draw_circle(buffer, &hoops->point, 50, clr->color);
	draw_circle(buffer, &hoops->point2, 50, clr->color);
}

void hoop(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	color_t clr;
	hoops_t hoops;

	set_clr(&clr);
	buffer = framebuffer_create(buffer, sfBlack);
	hoops.a = 0;
	while (disp->a_id == 3) {
		new_color(&clr);
		set_hoops(&hoops);
		draw_hoops(&hoops, buffer, &clr);
		sfRenderWindow_clear(disp->window, sfGreen);
		setter_disp(disp, buffer);
	}
	free (buffer);
}
