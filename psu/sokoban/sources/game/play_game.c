/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** play_game
*/

#include "sokoban.h"

void play_game(game_t *infos, char **map)
{
	int kb = 0;
	WINDOW *wdw = init_game_window();

	while (1) {
		display_map(map, wdw);
	        do_action(map, infos, kb);
		kb = wgetch(wdw);
		clear();
		wrefresh(wdw);
		if (kb == 27)
			break;
		else if (kb == ' ') {
			map = reset_map(map, infos->map_name);
			infos = reset_infos(infos);
		}
		if (is_game_finished(map, infos) == true)
			break;
	}
	endwin();
}
