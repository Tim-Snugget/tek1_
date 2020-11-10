/*
** EPITECH PROJECT, 2017
** move_balls.c
** File description:
** move balls
*/

#include "scrsaver.h"

void decrem_balls(balls_coords *ball)
{
	ball->b1.x -= 3;
	ball->b3.x -= 3;
	ball->b5.x -= 3;
	ball->b2.x += 3;
	ball->b4.x += 3;
}

void increm_balls(balls_coords *ball)
{
	ball->b1.x += 3;
	ball->b3.x += 3;
	ball->b5.x += 3;
	ball->b2.x -= 3;
	ball->b4.x -= 3;
}
