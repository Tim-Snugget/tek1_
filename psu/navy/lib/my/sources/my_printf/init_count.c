/*
** EPITECH PROJECT, 2017
** my_printf : init_count
** File description:
** put all count to 0
*/

#include "printf.h"

void init_count(count_t *count)
{
	count->modulo = 0;
	count->i = 0;
	count->type = 0;
	count->hash = 0;
	count->plus = 0;
	count->space = 0;
	count->minus = 0;
	count->zero = 0;
}
