/*
** EPITECH PROJECT, 2017
** scrsaver.h
** File description:
** header of my_screensaver
*/

#ifndef _SCRSAVER_H_
#define _SCRSAVER_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>
#include "my.h"

#define MAX_ID	10

typedef struct chrono {
	sfClock *clock;
	sfTime time;
	union {
		float my_sec;
		float my_ten_s;
		float my_hun_s;
		float my_tho_s;
	};
} Chrono;

typedef struct beats {
	sfVector2i pos;
	sfVector2i size;
	sfVector2i pos_s;
} Beats;

typedef struct equalizers_pulses {
	Beats beat_1;
	Beats beat_2;
	Beats beat_3;
	Beats beat_4;
	Beats beat_5;
	Beats beat_6;
	Beats beat_7;
	Beats beat_8;
	Beats beat_9;
	Beats beat_10;
	sfVector2i size_s;
} Pulses;

typedef struct use {
	sfRenderWindow *window;
	sfVideoMode mode;
	sfSprite *sprite;
	sfTexture *texture;
	sfEvent event;
	int a_id;
}Useful;

typedef struct framerbuffer {
	unsigned int width;
	unsigned int height;
	sfUint8 *pixels;
} framebuffer_t;

typedef struct balls {
	sfVector2i b1 ;
	sfVector2i b2 ;
	sfVector2i b3 ;
	sfVector2i b4 ;
	sfVector2i b5 ;
}balls_coords;

typedef struct animated_color {
	sfColor color;
	int a_t;
	int r_t;
	int g_t;
	int b_t;
}color_t;

typedef struct hoops_struct {
	sfVector2i hoop;
	sfVector2i med_hoop;
	sfVector2i point;
	sfVector2i point2;
	float a;
} hoops_t;

typedef struct rectangles_comp{
	sfVector2i pos;
	sfVector2i size;
}Rect;

typedef struct expend_squares {
	Rect rt1;
        Rect rt2;
	Rect rt3;
	Rect rt4;
}Rectangles;

typedef struct rolling_ball {
	sfVector2i pos1;
	int s1;
	sfVector2i pos2;
	int s2;
	sfVector2i pos3;
	int s3;
	sfVector2i pos4;
	int s4;
	color_t clr1;
	color_t clr2;
	color_t clr3;
	color_t clr4;
} Roll;

typedef struct crescent_ani {
	sfVector2i pos1;
	sfVector2i pos2;
	sfVector2i pos3;
	sfVector2i pos4;
	sfVector2i pos5;
	sfVector2i pos6;
	sfVector2i pos7;
	sfVector2i pos8;
	sfVector2i pos9;
	sfVector2i pos10;
	float a;
}crescent_t;

void		ball(Useful *disp);
int		ball_animated(balls_coords *ball, int tor);
void		crescent(Useful *disp);
framebuffer_t	*dancer_buffer(framebuffer_t *buffer, sfColor color);
void		dancing_guy(Useful *disp);
void		decrem_balls(balls_coords *ball);
void		destroy_disp(Useful *disp);
void		display_animation(Useful *disp);
void		draw_balls(color_t *clr, balls_coords *ball,	\
			   framebuffer_t *buffer);
void		draw_circle(framebuffer_t *buffer, sfVector2i *center,	\
			    int radius, sfColor color);
void		draw_eyes(framebuffer_t *buffer);
void		draw_hoops(hoops_t *hoops, framebuffer_t *buffer,	\
			   color_t *clr);
void		draw_rect(framebuffer_t *buffer, sfVector2i *pos,	\
			  sfVector2i *size, sfColor color);
void		draw_equ(framebuffer_t *buffer, sfVector2i *pos,	\
			  sfVector2i *size, sfColor color);
void		drops(Useful *disp);
void		equalizers(Useful *disp);
void		execute_selected_instr(Useful *disp, int select);
void		exp_rects(Useful *disp);
void		fill_screen(Useful *disp);
void		fill_the_screen(sfVector2i *pos, sfVector2i *size);
framebuffer_t	*framebuffer_clear(framebuffer_t *buffer, sfColor color);
framebuffer_t	*framebuffer_create(framebuffer_t *buffer, sfColor color);
framebuffer_t	*framebuffer_smooth(framebuffer_t *buffer);
void		get_a_t(color_t *clr);
void		get_b_t(color_t *clr);
void		get_g_t(color_t *clr);
void		get_r_t(color_t *clr);
int		get_anim(sfEvent *event, int id);
int		get_instr(sfEvent *event, int select);
int		handle_key(int select, int q);
void		hoop(Useful *disp);
void		increm_balls(balls_coords *ball);
void		mini_decrem(Rectangles *rects);
void		mini_increm(Rectangles *rects);
void		my_draw_square(framebuffer_t *buffer, sfVector2u position, \
			       unsigned int size, sfColor color);
void		my_put_pixel(framebuffer_t *buffer, unsigned int x, \
			     unsigned int y, sfColor color);
void		new_color(color_t *clr);
sfVector2i	new_position(sfVector2i drop);
void		new_pos_filler(sfVector2i *pos);
int		new_rects(Rectangles *rects, int mem);
void		next_roll1(Roll *lil_balls);
void		next_roll2(Roll *lil_balls);
void		next_roll3(Roll *lil_balls);
void		next_roll4(Roll *lil_balls);
void		print_bad_arg();
void		print_infos();
void		print_help();
void		psychowire(Useful *disp);
void		quit_window(Useful *disp);
sfColor		random_color(sfColor color);
void		roll(Useful *disp);
void		set_ball_init(sfVector2i *ball);
void		set_beat1(Beats *beat_1, sfVector2i *size_s);
void		set_beat2(Beats *beat_2, sfVector2i *size_s);
void		set_beat3(Beats *beat_3, sfVector2i *size_s);
void		set_beat4(Beats *beat_4, sfVector2i *size_s);
void		set_beat5(Beats *beat_5, sfVector2i *size_s);
void		set_beat6(Beats *beat_6, sfVector2i *size_s);
void		set_beat7(Beats *beat_7, sfVector2i *size_s);
void		set_beat8(Beats *beat_8, sfVector2i *size_s);
void		set_beat9(Beats *beat_9, sfVector2i *size_s);
void		set_beat10(Beats *beat10_, sfVector2i *size_s);
void		set_clr(color_t *clr);
void		set_disp(Useful *disp, int select);
void		set_hoops(hoops_t *hoops);
void		set_rects(Rectangles *rects);
void		setter_disp(Useful *disp, framebuffer_t *buffer);
void		spectrum(Useful *disp);
void		waving_arms(framebuffer_t *buffer, float a);

#endif
