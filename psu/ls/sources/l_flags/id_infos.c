/*
** EPITECH PROJECT, 2017
** id_infos.c
** File description:
** id informations
*/

#include "ls_my.h"

void put_idn(uid_t user_id, gid_t grp_id)
{
	struct passwd *pw_i;
	struct group *pw_g;

	pw_i = getpwuid(user_id);
	my_putstr(pw_i->pw_name);
	my_putchar(' ');
	pw_g = getgrgid(grp_id);
	my_putstr(pw_g->gr_name);
	my_putchar(' ');
}
