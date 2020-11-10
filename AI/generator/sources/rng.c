/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** Random Number Generator
*/

#include "gen.h"
#include <time.h>

int get_random_nbr(void)
{
	int crate;

	time(NULL);
	crate = rand();
	if (crate < 0)
		crate *= -1;
	return (crate);
}
