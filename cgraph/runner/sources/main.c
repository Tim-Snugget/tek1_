/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main function
*/

#include "runner.h"

void loop(run_t *runner)
{
	refresh_car(runner);
	move_parallax(runner);
	move_p_car(runner);
	get_score(runner);
	window_displayer(runner);
	event(runner);
}

int exit_error_args(int ac, run_t *runner)
{
	my_putstr("./my_runner:  bad arguments:  ");
	my_putnbr(ac - 1);
	my_putstrb(" given but 1 is required");
	my_putstrb("retry with -h");
	destroy_runner(runner);
	free(runner);
	return (84);
}

int exit_error(run_t *runner)
{
	destroy_runner(runner);
	free(runner);
	return (84);
}

int exit_and_disp_help(run_t *runner)
{
	my_putstrb("Finite runner created with CSFML\n");
	my_putstrb("USAGE");
	my_putstrb("  ./my_runner map.txt\n\n");
	my_putstrb("OPTIONS");
	my_putstrb("  -i\t\tlaunch the game in infinity mode.");
	my_putstrb("  -h\t\tprint the usage and quit\n");
	my_putstrb("USER INTERACTIONS");
	my_putstrb("  SPACE KEY\tjump.");
	destroy_runner(runner);
	free(runner);
	return (84);
}

int main(int ac, char **av)
{
	run_t *runner = malloc(sizeof(run_t));
	char **tab = NULL;

	if (ac != 2)
		return (exit_error_args(ac, runner));
        if (ac == 2 && my_strcmp(av[1], "-h") == 0)
		return (exit_and_disp_help(runner));
	tab = get_map(av[1], tab);
	if (tab == NULL)
		return (exit_error(runner));
	tab = get_tab(tab, av[1]);
	if (tab == NULL || parse_map(tab) == false)
		return (exit_error(runner));
	init_runner(runner);
	while (sfRenderWindow_isOpen(runner->window))
		loop(runner);
	destroy_runner(runner);
	free(runner);
	return (0);
}
