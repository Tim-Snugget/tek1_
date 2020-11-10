/*
** EPITECH PROJECT, 2018
** ms1.h
** File description:
** minishell1.h
*/

#ifndef __MS1_H__
#define __MS1_H__

#include "my.h"
#include <sys/wait.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct my_environment {
	char **env;
	size_t env_size;
	char **path;
};

typedef struct my_environment Env;

void	cd_error(char *name);
void	change_directory(char **arr, Env *core);
bool	check_binaries(char *arg, Env *core);
bool	check_validity_arg_se(char *arg);
void	copy_env(char **dest, char **env, size_t size);
char	*cut_current_dir(char *str);
void	destroy_env(Env *core);
void	disp_env(Env *core);
void	exec_built_in(char **arr, Env *core);
void	exec_err(char *name);
void	exec_proc(char **arr, Env *core);
void	exit_mysh(char **arr);
char	**get_bin_path(void);
char	*get_exec_full_name(char *arg, char **ae);
Env	*init_core(char **env);
void	instruction(char **arr, Env *core);
void	print_prompt(void);
void	select_set_env(Env *core, char **arr);
void	unset_env(Env *core, char **arr);

#endif
