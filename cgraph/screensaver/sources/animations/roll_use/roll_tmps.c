/*
** EPITECH PROJECT, 2017
** roll_tmps.c
** File description:
** roll functions
*/

#include "scrsaver.h"

void next_roll1(Roll *lil_balls)
{
	if (lil_balls->s1 == 1) {
		if (lil_balls->pos1.y == 549)
			lil_balls->s1 = 2;
		lil_balls->pos1.y++;
	}
	if (lil_balls->s1 == 2) {
		if (lil_balls->pos1.x == 749)
			lil_balls->s1 = 3;
		lil_balls->pos1.x++;
	}
	if (lil_balls->s1 == 3) {
		if (lil_balls->pos1.y == 51)
			lil_balls->s1 = 4;
		lil_balls->pos1.y--;
	}
	if (lil_balls->s1 == 4) {
		if (lil_balls->pos1.x == 51)
			lil_balls->s1 = 1;
		lil_balls->pos1.x--;
	}
}

void next_roll2(Roll *lil_balls)
{
	if (lil_balls->s2 == 1) {
		if (lil_balls->pos2.y == 549)
			lil_balls->s2 = 2;
		lil_balls->pos2.y++;
	}
	if (lil_balls->s2 == 2) {
		if (lil_balls->pos2.x == 749)
			lil_balls->s2 = 3;
		lil_balls->pos2.x++;
	}
	if (lil_balls->s2 == 3) {
		if (lil_balls->pos2.y == 51)
			lil_balls->s2 = 4;
		lil_balls->pos2.y--;
	}
	if (lil_balls->s2 == 4) {
		if (lil_balls->pos2.x == 51)
			lil_balls->s2 = 1;
		lil_balls->pos2.x--;
	}
}

void next_roll3(Roll *lil_balls)
{
	if (lil_balls->s3 == 1) {
		if (lil_balls->pos3.y == 549)
			lil_balls->s3 = 2;
		lil_balls->pos3.y++;
	}
	if (lil_balls->s3 == 2) {
		if (lil_balls->pos3.x == 749)
			lil_balls->s3 = 3;
		lil_balls->pos3.x++;
	}
	if (lil_balls->s3 == 3) {
		if (lil_balls->pos3.y == 51)
			lil_balls->s3 = 4;
		lil_balls->pos3.y--;
	}
	if (lil_balls->s3 == 4) {
		if (lil_balls->pos3.x == 51)
			lil_balls->s3 = 1;
		lil_balls->pos3.x--;
	}
}

void next_roll4(Roll *lil_balls)
{
	if (lil_balls->s4 == 1) {
		if (lil_balls->pos4.y == 549)
			lil_balls->s4 = 2;
		lil_balls->pos4.y++;
	}
	if (lil_balls->s4 == 2) {
		if (lil_balls->pos4.x == 749)
			lil_balls->s4 = 3;
		lil_balls->pos4.x++;
	}
	if (lil_balls->s4 == 3) {
		if (lil_balls->pos4.y == 51)
			lil_balls->s4 = 4;
		lil_balls->pos4.y--;
	}
	if (lil_balls->s4 == 4) {
		if (lil_balls->pos4.x == 51)
			lil_balls->s4 = 1;
		lil_balls->pos4.x--;
	}
}
