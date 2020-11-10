/*
** EPITECH PROJECT, 2018
** navy : first_player
** File description:
** fct for the first player
*/

#include "navy.h"
#include "my.h"
#include "printf.h"

void get_sp_pid(int sig, siginfo_t *info, void *context)
{
	(void)sig;
	(void)context;
	sonar.corres = info->si_pid;
	if (kill(sonar.corres, 0) == -1)
		sonar.corres = -1;
}

int connect_sp(void)
{
	struct sigaction act;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = &get_sp_pid;
	my_printf("my_pid: %i\n", getpid());
	my_printf("wait for enemy connection...\n\n");
	if (sigaction(SIGUSR2, &act, NULL) < 0 || sonar.corres == -1)
		return (-1);
	pause();
	my_putstr("enemy connected\n\n");
	return (0);
}

int first_player(char *file)
{
	char **my_map = get_map(file);
	char **enn_map = init_map();

	if (my_map == NULL || connect_sp() == - 1)
		return (84);
	sonar.index = 0;
	sonar.tmp = -1;
	if (loop_game_fp(my_map, enn_map) == 84)
		return (84);
	return (0);
}
