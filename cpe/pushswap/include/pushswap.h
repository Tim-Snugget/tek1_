/*
** EPITECH PROJECT, 2017
** pushswap.h
** File description:
** dot h
*/

#ifndef __PUSHSWAP_H__
#define __PUSHSWAP_H__

#include "my.h"

typedef struct datas {
	int *la;
	int la_len;
	int *lb;
	int lb_len;
} datas_t;

void	analyze_swaps(datas_t *arrays);
int	check_arrays_order(datas_t *arrays);
int	check_smest(datas_t *arrays);
int	get_smest_pos(datas_t *arrays);
void	my_pushswap(datas_t *arrays);
void	push_a(datas_t *arrays);
void	push_b(datas_t *arrays);
void	r_rotate_a(datas_t *arrays);
void	r_rotate_b(datas_t *arrays);
void	r_rotate_r(datas_t *arrays);
void	rotation(datas_t *arrays);
void	rotate_a(datas_t *arrays);
void	rotate_b(datas_t *arrays);
void	rotate_r(datas_t *arrays);
void	sort_arrays(datas_t *arrays);
void	swap_a(datas_t *arrays);
void	swap_b(datas_t *arrays);
void	swap_c(datas_t *arrays);
int	*update_lb_get(datas_t *arrays);
int	*update_la_give(datas_t *arrays);
int	*update_la_get(datas_t *arrays);
int	*update_lb_give(datas_t *arrays);

#endif
