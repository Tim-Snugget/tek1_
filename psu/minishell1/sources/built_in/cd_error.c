/*
** EPITECH PROJECT, 2018
** cd_error.c
** File description:
** chdir error handler
*/

#include "ms1.h"

void cd_error(char *name)
{
	my_print_err(name);
	switch (errno) {
	case EACCES: my_print_err(": Permission denied.\n"); break;
	case ENOTDIR: my_print_err(": Not a directory.\n"); break;
	case ENOENT: my_print_err(": No such file or directory.\n"); break;
	}
}
