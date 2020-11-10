/*
** EPITECH PROJECT, 2018
** print_help.c
** File description:
** print the "-h" arg
*/

#include "sokoban.h"

void print_help(void)
{
	my_putstr("USAGE\n     ./my_sokoban map\nDESCRIPTION\n");
	my_putstr("     map  file representing the warehouse map, containing");
	my_putstr(" '#' for walls,\n          'P' for the player, 'X' ");
	my_putstr("for boxes and 'O' for storage locations.\n");
	exit(0);
}
