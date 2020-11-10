/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** verify rooms and nodes
*/

#include "lemin.h"

bool match_node(char **node_list, int i, char *s1, char *s2)
{
	char *t1;
	char *t2;

	for (int j = i + 1; node_list[j]; j++) {
		t1 = get_first_room_node(node_list[j]);
		t2 = get_scnd_room_node(node_list[j]);
		if ((my_strcmp(s1, t1) == 0 && my_strcmp(s2, t2) == 0) ||
		    (my_strcmp(s1, t2) == 0 && my_strcmp(s2, t1) == 0)) {
			my_free(t1);
			my_free(t2);
			return (false);
		}
		my_free(t1);
		my_free(t2);
	}
	return (true);
}

bool check_doublons_nodes(char **node_list)
{
	char *s1;
	char *s2;

	for (int i = 0; node_list[i + 1]; i++) {
		s1 = get_first_room_node(node_list[i]);
		s2 = get_scnd_room_node(node_list[i]);
		if (match_node(node_list, i, s1, s2) == true) {
			my_free(s1);
			my_free(s2);
			return (false);
		}
		my_free(s1);
		my_free(s2);
	}
	return (true);
}

bool verify_rooms(room_t **rooms, char **params)
{
	char **node_list;

	if (check_doublons(rooms) == false)
		return (false);
	if (attribute_room_types(rooms, params) == false)
		return (false);
	node_list = get_nodes(params);
	if (check_doublons_nodes(node_list) == false) {
		for (int i = 0; node_list[i]; my_free(node_list[i]), i++);
		my_free(node_list);
		return (false);
	}
	return (true);
}
