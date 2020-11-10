/*
** EPITECH PROJECT, 2017
** crescent.c
** File description:
** crescent animation
*/

#include "scrsaver.h"

void crst_pp_to5(crescent_t *crst)
{
	crst->pos1.x = 400 + 10 * sin(crst->a);
	crst->pos1.y = 300 + 10 * cos(crst->a);
	crst->pos2.x = 400 + 10 * sin(2 * crst->a);
	crst->pos2.y = 300 + 10 * cos(2 * crst->a);
	crst->pos3.x = 100 + 10 * sin(-crst->a);
	crst->pos3.y = 150 + 10 * cos(-crst->a);
	crst->pos4.x = 100 + 10 * sin(-2 * crst->a);
	crst->pos4.y = 150 + 10 * cos(-2 * crst->a);
	crst->pos5.x = 700 + 10 * sin(crst->a);
	crst->pos5.y = 150 + 10 * cos(crst->a);
}

void crescent_pp(crescent_t *crst)
{
	crst_pp_to5(crst);
	crst->pos6.x = 700 + 10 * sin(2 * crst->a);
	crst->pos6.y = 150 + 10 * cos(2 * crst->a);
	crst->pos7.x = 100 + 10 * sin(crst->a);
	crst->pos7.y = 450 + 10 * cos(crst->a);
	crst->pos8.x = 100 + 10 * sin(2 * crst->a);
	crst->pos8.y = 450 + 10 * cos(2 * crst->a);
	crst->pos9.x = 700 + 10 * sin(-crst->a);
	crst->pos9.y = 450 + 10 * cos(-crst->a);
	crst->pos10.x = 700 + 10 * sin(-2 * crst->a);
	crst->pos10.y = 450 + 10 * cos(-2 * crst->a);
	crst->a += 0.1;
}

void disp_crescent(crescent_t *crst, framebuffer_t *buffer)
{
	draw_circle(buffer, &crst->pos1, 200, sfWhite);
	draw_circle(buffer, &crst->pos2, 197, sfBlack);
	draw_circle(buffer, &crst->pos3, 56, sfWhite);
	draw_circle(buffer, &crst->pos4, 53, sfBlack);
	draw_circle(buffer, &crst->pos5, 56, sfWhite);
	draw_circle(buffer, &crst->pos6, 53, sfBlack);
	draw_circle(buffer, &crst->pos7, 56, sfWhite);
	draw_circle(buffer, &crst->pos8, 53, sfBlack);
	draw_circle(buffer, &crst->pos9, 56, sfWhite);
	draw_circle(buffer, &crst->pos10, 53, sfBlack);
}

void crescent(Useful *disp)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	crescent_t *crst = malloc(sizeof(crescent_t));

	buffer = framebuffer_create(buffer, sfBlack);
	crst->a = 0.01;
	while (disp->a_id == 10) {
		framebuffer_clear(buffer, sfBlack);
		disp_crescent(crst, buffer);
		crescent_pp(crst);
		setter_disp(disp, buffer);
	}
	free (buffer);
	free (crst);
}
