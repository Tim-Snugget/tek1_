/*
** EPITECH PROJECT, 2018
** runner.h
** File description:
** runner header
*/

#ifndef __RUNNER_H__
#define __RUNNER_H__

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "my.h"

typedef struct contain_three_floats {
	float a;
	float b;
	float c;
} Vector3f;

typedef struct chrono {
	sfClock *clock;
	sfTime time;
	float my_sec;
} Chrono;

typedef struct car_struct {
	sfTexture *texture;
	sfSprite *sprite;
	sfVector2f pos;
	sfIntRect rect;
} Car_t;

typedef struct parallax_struct {
	sfTexture *texture;
	sfSprite *sprite;
	sfVector2f offset;
} Pllx;

typedef struct score_struct {
	sfText *header;
	sfText *value;
	sfFont *font;
	unsigned int i;
	Chrono watch;
} score_t;

typedef struct my_runner_struct {
	sfRenderWindow *window;
	sfVideoMode mode;
	Car_t car;
	Car_t obs;
	Pllx forg;
	Pllx midg;
	Pllx bakg;
	sfEvent evt;
	Chrono watch;
	sfMusic *music;
	score_t score;
} run_t;

void	car_jump(run_t *runner);
bool	check_chars(char **tab);
bool	check_post_floor(char **tab, int floor, int floor_len);
bool	check_pre_floor(char **tab, int floor, int floor_len);
void	destroy_runner(run_t *runner);
void	event(run_t *runner);
int	get_floor(char **tab);
int	get_len(char **tab, int floor);
char	**get_map(const char *str, char **tab);
void	get_score(run_t *runner);
char	**get_tab(char **tab, const char *str);
void	init_background(run_t *runner);
void	init_car(run_t *runner);
void	init_foreground(run_t *runner);
void	init_midground(run_t *runner);
void	init_police_car(run_t *runner);
void	init_runner(run_t *runner);
void	init_score(run_t *runner);
char	*int_to_str(int i);
void	increm_rect(sfIntRect *rect);
void	jump_car(run_t *runner);
void	move_p_car(run_t *runner);
void	move_parallax(run_t *runner);
bool	parse_map(char **tab);
void	quit_window(run_t *runner);
void	refresh_car(run_t *runner);
void	stock_map(char **tab, char *buf, int cnt, size_t read);
void	window_displayer(run_t *runner);

#endif
