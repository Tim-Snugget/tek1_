/*
** EPITECH PROJECT, 2017
** access.c
** File description:
** get and put the access rights of an entity
*/

#include "ls_my.h"

char type_entity(mode_t access)
{
	switch (access & S_IFMT) {
	case S_IFBLK:
		return ('b');
	case S_IFCHR:
		return ('c');
	case S_IFDIR:
		return ('d');
	case S_IFIFO:
		return ('p');
	case S_IFLNK:
		return ('l');
	case S_IFREG:
		return ('-');
	case S_IFSOCK:
		return ('s');
	}
	return (0);
}

void put_access(mode_t access)
{
	my_putchar(type_entity(access));
	my_putchar(access & S_IRUSR ? 'r' : '-');
	my_putchar(access & S_IWUSR ? 'w' : '-');
	my_putchar(access & S_IXUSR ? 'x' : '-');
	my_putchar(access & S_IRGRP ? 'r' : '-');
	my_putchar(access & S_IWGRP ? 'w' : '-');
	my_putchar(access & S_IXGRP ? 'x' : '-');
	my_putchar(access & S_IROTH ? 'r' : '-');
	my_putchar(access & S_IWOTH ? 'w' : '-');
	my_putchar(access & S_IXOTH ? 'x' : '-');
}
