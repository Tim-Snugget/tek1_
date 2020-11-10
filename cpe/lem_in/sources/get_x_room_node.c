/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** get 1st / 2nd room node
*/

#include "lemin.h"

char *get_first_room_node(char *buf)
{
	int index = 0;
	char *ptr;

	for (index = 0; buf[index] != '-'; index++);
	ptr = my_strndup(buf, index);
	return (ptr);
}

char *get_scnd_room_node(char *buf)
{
	int index = 0;
	int i;
	int cnt;
	char *ptr;

	for (index = 0; buf[index] != '-'; index++);
	for (cnt = index + 1, i = 0; buf[cnt]; cnt++, i++);
	ptr = my_strndup(&buf[index + 1], i);
	return (ptr);
}
