/*
** EPITECH PROJECT, 2018
** recieved_torpedo.c
** File description:
** defending with a torpedo in your map
*/

#include "navy.h"
#include "my.h"
#include "printf.h"

void send_back_result(int let, int nb, char **my_map)
{
	if (my_map[nb - 1][let] < '2' || my_map[nb - 1][let] > '5') {
		if (my_map[nb - 1][let] == '.')
			my_map[nb - 1][let] = 'o';
		my_printf("missed\n");
		kill(sonar.corres, SIGUSR2);
	} else {
		sonar.end_en++;
		my_printf("hit\n");
		kill(sonar.corres, SIGUSR1);
	}
}

void get_bin(int sig, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;
	if (sonar.index >= 6)
		sonar.index = 0;
	if (sig == 10)
		sonar.arr[sonar.index++] = 1;
	if (sig == 12)
		sonar.arr[sonar.index++] = 0;
}

void recieved_torpedo(char **my_map)
{
	struct sigaction act;
	int nb;
	int let;

	sonar.arr = my_malloc(sizeof(int) * 10);
	my_memset(sonar.arr, -1, sizeof(int) * 10);
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = &get_bin;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (sonar.index < 6)
		pause();
	my_nanosleep(0, 20);
	let = sonar.arr[0] * 4 + sonar.arr[1] * 2 + sonar.arr[2];
	nb = sonar.arr[3] * 4 + sonar.arr[4] * 2 + sonar.arr[5];
	send_back_result(let, nb, my_map);
	my_free(sonar.arr);
}
