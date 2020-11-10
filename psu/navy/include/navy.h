/*
** EPITECH PROJECT, 2018
** navy : include
** File description:
** include all prototypes
*/

#ifndef __NAVY_H__
#define __NAVY_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>

typedef struct crate {
	pid_t corres;
	int index;
	int *arr;
	int tmp;
	int end_my;
	int end_en;
} Mem_card;

extern Mem_card sonar;

void display_usage(void);
char **get_map(char *file);
char **init_map(void);
int open_and_parse_map(char *file, char **map);
bool check_line(char **arg);
bool check_first_column(char *str);
bool check_other_column(char *str);
int second_player(char *map_file);
int first_player(char *file);
int connect_sp(void);
void get_sp_pid(int sig, siginfo_t *info, void *context);
void set_boat(char **arg, char **map);
bool is_empty_space(char **arg, char **map);
void print_map(char **map);
int loop_game_fp(char **my_map, char **enn_map);
int attack(char **enn_map);
int number_letter(char **enn_map, char *str, int loop);
char get_number(char *str);
char get_letter(char *str, char number);
void defend(char **my_map);
int loop_game_sp(char **my_map, char **enn_map);
char get_attack(char **map, char *str);
char position(char letter, char number, char **en_map);
int check_pid(char *arg);
void recieved_torpedo(char **my_map);
int send_torpedo(char number, char letter);
char *deca_to_bin_navy(int nb);
int check_win_lose();

#endif
