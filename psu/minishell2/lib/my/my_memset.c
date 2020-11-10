/*
** EPITECH PROJECT, 2018
** my_memset.c
** File description:
** memset own function - set the n first bytes of the ptr to the c char
*/

#include "my.h"

void *my_memset(void *ptr, int c, size_t n)
{
	char *p = (char*)ptr;
	for (size_t i = 0; i < n; i++)
		p[i] = c;
	return (ptr);
}
