/*
** EPITECH PROJECT, 2018
** navy : parse_map
** File description:
** parse the map
*/

#include "navy.h"
#include "my.h"

int open_and_parse_map(char *file, char **map)
{
	int fd = open(file, O_RDONLY);
	char **args = NULL;

	if (fd == -1)
		return (84);
	for (int i = 0; i < 4; i++) {
		args = str_to_word_array(get_next_line(fd), ':');
		if (args == NULL || check_line(args) == false)
			return (84);
		if (is_empty_space(args, map) == false)
			return (84);
		set_boat(args, map);
		my_free_tab(args);
	}
	close(fd);
	return (0);
}
