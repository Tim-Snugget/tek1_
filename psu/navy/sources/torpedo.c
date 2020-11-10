/*
** EPITECH PROJECT, 2018
** torpedo.c
** File description:
** a torpedo's moving...
*/

#include "navy.h"
#include "my.h"

void send_signals(char c)
{
	if (c == '1')
		kill(sonar.corres, SIGUSR1);
	if (c == '0')
		kill(sonar.corres, SIGUSR2);
}

void shoot_torpedo(char number, char letter)
{
	char *lett_b = deca_to_bin_navy(letter - 'A');
	char *digi_b = deca_to_bin_navy(number - '0');

	for (int cnt = 0; cnt < 3; cnt++) {
		my_nanosleep(0, 10);
		send_signals(lett_b[cnt]);
	}
	for (int cnt = 0; cnt < 3; cnt++) {
		my_nanosleep(0, 10);
		send_signals(digi_b[cnt]);
	}
	my_nanosleep(0, 10);
	kill(sonar.corres, SIGUSR1);
	my_free(lett_b);
	my_free(digi_b);
}

void info_torpedo(int sig, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;
	if (sig == SIGUSR1)
		sonar.tmp = 1;
	if (sig == SIGUSR2)
		sonar.tmp = 0;
}

int send_torpedo(char number, char letter)
{
	struct sigaction act;
	int crate;

	shoot_torpedo(number, letter);
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = &info_torpedo;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	if (sonar.tmp == -1)
		pause();
	crate = sonar.tmp;
	sonar.tmp = -1;
	return (crate);
}
