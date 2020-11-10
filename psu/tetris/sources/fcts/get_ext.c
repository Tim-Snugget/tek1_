/*
** EPITECH PROJECT, 2018
** mytetris
** File description:
** get_ext.c
*/

#include "tetris.h"

char *get_ext(char *file)
{
	return (&file[my_strlen(file) - 10]);
}
