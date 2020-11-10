/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "scrsaver.h"

int handle_event(Useful *disp, sfEvent *event)
{
	if (event->type == sfEvtKeyReleased && event->key.code == sfKeyLeft)
		return (1);
	else if (event->type == sfEvtKeyPressed &&	\
		 event->key.code == sfKeyRight)
		return (2);
	else if (event->type == sfEvtClosed)
		return (0);
	return (disp->a_id);
}

bool check_flags(const char *arg)
{
	if (my_strcmp(arg, "-h") == 0 || my_strcmp(arg, "-d") == 0) {
		if (my_strcmp(arg, "-h") == 0)
			print_help();
		else
			print_infos();
		return (true);
	}
	return (false);
}

int main(int ac, char **av)
{
	Useful disp;

	if (ac != 2) {
		print_bad_arg();
		return (84);
	}
	if (check_flags(av[1]) == true)
		return (84);
	if (my_getnbr(av[1]) < 1 || my_getnbr(av[1]) > MAX_ID)
		return (84);
	set_disp(&disp, my_getnbr(av[1]));
	while (disp.a_id != 0) {
		display_animation(&disp);
		sfRenderWindow_clear(disp.window, sfBlack);
	}
	destroy_disp(&disp);
	return (0);
}
