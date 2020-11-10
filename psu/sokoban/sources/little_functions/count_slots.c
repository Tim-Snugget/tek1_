/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** count_slots
*/

#include "sokoban.h"

int count_slots(char c)
{
	if (c == 'O')
		return (1);
	else
		return (0);
}

int count_crates(char c)
{
	if (c == 'X')
		return (1);
	else
		return (0);
}
