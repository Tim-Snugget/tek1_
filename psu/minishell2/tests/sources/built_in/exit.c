/*
** EPITECH PROJECT, 2018
** exit.c
** File description:
** exit function
*/

#include "ms.h"

void exit_mysh(char **arr)
{
	int array_size = my_array_size_c(arr);

	if (array_size <= 2)
		my_puts("exit");
	if (array_size == 1)
		exit(0);
	else if (array_size > 2)
		my_print_err("exit: Expression Syntax.\n");
	else
		exit(my_getnbr(arr[1]));
}
