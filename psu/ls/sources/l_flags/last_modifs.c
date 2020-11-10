/*
** EPITECH PROJECT, 2017
** last_modifs.c
** File description:
** putthe the time of the last modification of the file
*/

#include "ls_my.h"
#include <time.h>

void	put_last_modif_t(time_t *date)
{
	char *time = ctime(date);
	int x = 4;

	while (x < 16) {
		my_putchar(time[x]);
		x++;
	}
	my_putchar(' ');
}
