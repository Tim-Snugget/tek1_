/*
** EPITECH PROJECT, 2018
** my_kill.c
** File description:
** kill with error handling
*/

#include "my.h"

void my_kill(pid_t pid, int sig)
{
	int val;

	val = kill(pid, sig);
	if (val == -1) {
		perror("kill");
		exit(84);
	}
}
