/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** tetris main
*/

#include "tetris.h"

void display_exec_name_usage(char *exec)
{
	my_putstr("Usage:  ");
	my_putstr(exec);
	my_puts(" [options]");
}

int display_usage(char *exec)
{
	display_exec_name_usage(exec);
	my_puts("Options:\n --help\t\t      Display this help");
	my_puts(" -L --level={num}     Start Tetris at level num (def: 1)");
	my_putstr(" -l --key-left={K}    Move the tetrimino LEFT using the ");
	my_puts("K key (def: left arrow)");
	my_putstr(" -r --key-right={K}   Move the tetrimino RIGHT using");
	my_puts(" the K key (def: right arrow)");
	my_putstr(" -t --key-turn={K}    TURN the tetrimino clockwise 90d ");
	my_puts("using the K key (def: top arrow)");
	my_putstr(" -d --key-drop={K}    DROP the tetrimino using ");
	my_puts("the K key (def: down arrow)");
	my_putstr(" -q --key-quit={K}    QUIT the game using ");
	my_puts("the K key (def: 'q' key)");
	my_putstr(" -p --key-pause={K}   PAUSE/RESTART the game using ");
	my_puts("the K key (def: space bar)");
	my_putstr(" --map-size={row,col} Set the numbers of rows and ");
	my_puts("columns of the map (def: 20*10)");
	my_puts(" -w --without-next    Hide next tetrimino (def: false)");
	my_puts(" -D --debug\t      Debug mode (def: false)");
	return (0);
}

int main(int ac, char **av)
{
	game_t *commands;

	if (ac == 2 && my_strcmp(av[1], "--help") == 0)
		return (display_usage(av[0]));
	commands = get_commands(ac, av);
	if (commands == NULL)
		return (84);
	for (int i = 1; i < ac; i++)
		if (my_strcmp(av[i], "-D") == 0 ||
		my_strcmp(av[i], "--debug") == 0)
			print_debug(commands);
	if (play_tetris(commands) == 84)
		return (84);
	return (0);
}
