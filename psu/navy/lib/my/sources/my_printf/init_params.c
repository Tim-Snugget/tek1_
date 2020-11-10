/*
** EPITECH PROJECT, 2017
** printf : init_params
** File description:
** initialize params only
*/

#include "printf.h"

void init_params(count_t *count)
{
	count->hash = 0;
	count->type = 0;
	count->plus = 0;
	count->minus = 0;
	count->space = 0;
}
