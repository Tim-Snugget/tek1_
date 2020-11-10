/*
** EPITECH PROJECT, 2018
** my_perror.c
** File description:
** perror function, with an exit
*/

#include "tetris.h"

void my_perror(char *str)
{
	perror(str);
	exit(84);
}
