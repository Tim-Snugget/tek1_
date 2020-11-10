/*
** EPITECH PROJECT, 2018
** my_nanosleep.c
** File description:
** parameters a nanosleep function and use it
*/

#include <time.h>

void my_nanosleep(int sec, int nsec)
{
	struct timespec ts;

	ts.tv_sec = sec;
	ts.tv_nsec = nsec;
	nanosleep(&ts, NULL);
}
