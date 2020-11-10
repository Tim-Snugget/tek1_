/*
** EPITECH PROJECT, 2017
** ls_my.h
** File description:
** my .h of my_ls
*/

#ifndef __LS_MY_H__
#define __LS_MY_H__

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>
#include <errno.h>
#include "my.h"

typedef struct list_opt {
	int nbr;
	int l;
	int rCaps;
	int d;
	int r;
	int t;
} list_opt_t;

void	backline(int cnt);
int	check_files(char **av, int ac);
int	check_folders(char **av, int ac);
void	disp_content(char *name, list_opt_t *options);
void	display_flags(char *arg, list_opt_t *options);
void	display_files(list_opt_t *options, char **av, int ac);
int	get_loc_total(char *name);
void	get_nbr_of_opts(list_opt_t *options, char **av, int ac);
void	get_options(list_opt_t *options, char *str);
void	get_options_p2(list_opt_t *options, char *str, int x);
int	identify_type(char *name);
void	initialize_opts(list_opt_t *options);
void	main_folders(char **av, int ac, int nb, list_opt_t *options);
void	my_ls(list_opt_t *options, char *name);
void    put_folder_name(char *name, int nb, int valArgs);
void	put_access(mode_t access);
void	put_blocks(char *name, list_opt_t *options);
void	put_group_rights(char *ent);
void	put_idn(uid_t user_id, gid_t grp_t);
void	put_l_flag(char *arg);
void	put_last_modif_t(time_t *date);
void	put_other_rights(char *ent);
void	put_size_b(off_t size);
void	put_user_rights(char *ent);
char	*strpath(char *folder, char *ent);
char	type_entity(mode_t access);
int	valid_args(char **av, int ac);

#endif
