/*
** EPITECH PROJECT, 2017
** quit_window.c
** File description:
** exit program
*/

#include "scrsaver.h"


void get_the_key(sfEvent *event)
{
	if (event->key.code == sfKeyLeft)
		my_putstr("LEEEEEEEEFT\n");
	else if (event->key.code == sfKeyRight)
		my_putstr("RIIIIIIIGHT\n");
}

int get_anim(sfEvent *event, int id)
{
	if (event->key.code == sfKeyLeft) {
		if (id == 1)
			id = MAX_ID;
		else
			id--;
	} else if (event->key.code == sfKeyRight) {
		if (id == MAX_ID)
			id = 1;
		else
			id++;
	}
	return (id);
}

void quit_window(Useful *disp)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(disp->window, &event) == sfTrue) {
		if (event.type == sfEvtClosed)
			disp->a_id = 0;
		else if (event.type == sfEvtKeyReleased)
			disp->a_id = get_anim(&event, disp->a_id);
	}
}
