/*
** EPITECH PROJECT, 2017
** print_amin.c
** File description:
** everything you need to print from the main
*/

#include "scrsaver.h"

void print_bad_arg()
{
	my_putstr("./my_screensaver:  bad arguments:\t");
	my_putstr("0 is given but 1 is required\n");
	my_putstr("retry with -h\n");
}

void print_help()
{
	my_putstr("animation rendering in a CSFML window.\n\n");
	my_putstr("USAGE\n");
	my_putstr(" ./my_sreensaver [OPTIONS] animation_id\n");
	my_putstr("  animation_id   ID of the animation to process ");
	my_putstr("(between 1 and ");
	my_put_nbr(MAX_ID);
	my_putstr(").\n\nOPTIONS\n -d\t\tprint");
	my_putstr(" the description of all the animations and quit.\n ");
	my_putstr("-h\t\tprint the usage and quit.\n\nUSER INTERACTIONS\n");
	my_putstr(" LEFT_ARROW\tswitch to the previous animation.\n ");
	my_putstr("RIGHT_ARROW\tswitch to the next animation.\n\n");
}

void print_infos()
{
	my_putstr("1:  5 bouncing balls, with a horizontal trajectory.\n");
	my_putstr("2:  Paint drops, a reset comes after 20 seconds.\n");
	my_putstr("3:  Bright hoops, and centered balls, rotationg.\n");
	my_putstr("4:  Equalizers animations.\n");
	my_putstr("5:  Blue rectangles, getting bigger and smaller.\n");
	my_putstr("6:  Cover the screen with a random color.\n");
	my_putstr("7:  A dancing guy, with waving arms.\n");
	my_putstr("8:  Random spectrum, with a reset after 5 seconds.\n");
	my_putstr("9:  4 randomly colored circles, ");
	my_putstr("rolling around the screen.\n");
	my_putstr("10: Fast period white crescents.\n");
}
