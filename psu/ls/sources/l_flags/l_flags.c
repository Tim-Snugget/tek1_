/*
** EPITECH PROJECT, 2017
** l_flags.c
** File description:
** l_flags functions
*/

#include "ls_my.h"
#include <time.h>

void put_l_flag(char *ent)
{
	struct stat sb;

	if (stat(ent, &sb) == 0) {
		put_access(sb.st_mode);
		my_put_nbr(sb.st_nlink);
		my_putchar(' ');
		put_idn(sb.st_uid, sb.st_gid);
		put_size_b(sb.st_size);
		put_last_modif_t(&sb.st_mtime);
	}
}
