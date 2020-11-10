/*
** EPITECH PROJECT, 2018
** navy : display_usage
** File description:
** -h option
*/

#include "my.h"

void display_usage(void)
{
	my_putstr("USAGE\n\t./navy [first_player_pid] navy_positions\n");
	my_putstr("DESCRIPTION\n\tfirst_player_pid:  only for the 2nd player");
	my_putstr(".  pid of the first player.\nnavy_positions:  file");
	my_putstr("representing the positions of the ships.");
}
