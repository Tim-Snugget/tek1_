/*
** EPITECH PROJECT, 2018
** lib : my_memset.c
** File description:
** memset own function - set the n first bytes of the ptr to the c char
*/

#include "my.h"

void *my_smalloc(void *ptr, int c, size_t size)
{
	if (size <= 0)
		return (NULL);
	ptr = my_malloc(size);
	my_memset(ptr, c, size);
	return (ptr);
}

void *my_memset(void *ptr, int c, size_t n)
{
	char *p = (char *)ptr;

	for (size_t i = 0; i < n; i++)
		p[i] = c;
	return (ptr);
}
