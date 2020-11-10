/*
** EPITECH PROJECT, 2018
** my_arrays_size.c
** File description:
** returns the size of the given array
*/

#include "my.h"

int my_array_size_c(char **arr)
{
	int cnt;

	for (cnt = 0; arr[cnt]; cnt++);
	return (cnt);
}

int my_array_size_i(int **arr)
{
	int cnt;

	for (cnt = 0; arr[cnt]; cnt++);
	return (cnt);
}
