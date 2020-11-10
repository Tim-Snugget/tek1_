/*
** EPITECH PROJECT, 2018
** lem_in
** File description:
** lemin header
*/

#ifndef __LEMIN_H__
#define __LEMIN_H__

#include "../lib/my/include/my.h"

typedef struct coordinates {
	int x;
	int y;
} pos_t;

typedef struct room_parameters {
	char *name;
	int type;
	pos_t *coords;
} room_t;

/* little functions */
int	count_words(char *str);
int	count_nbrs(char *str);
void	*free_rooms(room_t **ptr);
int	count_rooms(char **params);
char	*get_word(char *);

/* parse - verify - check */
bool	parse_line(char *buf, int i);
bool	verify_params(char **params);
bool	verify_rooms(room_t **, char **);
bool	verify_room_name(char *buf);
bool	verify_node(char *buf);
bool	is_doublons(room_t **crate, int i);
bool	check_doublons(room_t **);

/* get functions */
room_t	**get_rooms(void);
char	**get_params(void);
char	**get_nodes(char **);
char	*get_first_room_node(char *);
char	*get_scnd_room_node(char *);

/* else */
bool	attribute_room_types(room_t **, char **);

#endif
