/*
** EPITECH PROJECT, 2017
** displayers.c
** File description:
** display functions
*/

#include "scrsaver.h"

void sw2_disp_anim(Useful *disp)
{
	switch (disp->a_id) {
	case 9:
		roll(disp);
	case 10:
		crescent(disp);
	}
}

void display_animation(Useful *disp)
{
	switch (disp->a_id) {
	case 1:
		ball(disp);
	case 2:
		drops(disp);
	case 3:
		hoop(disp);
	case 4:
		equalizers(disp);
	case 5:
		exp_rects(disp);
	case 6:
		fill_screen(disp);
	case 7:
		dancing_guy(disp);
	case 8:
		spectrum(disp);
	default:
		sw2_disp_anim(disp);
	}
}
