/*
** EPITECH PROJECT, 2018
** ms.h
** File description:
** minishell.h
*/

#ifndef __MS_H__
#define __MS_H__

#include "../lib/my/include/my.h"
#include "../lib/my/include/gnl.h"
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define READ_END 0
#define WRITE_END 1

typedef struct s_environment
{
	char **env;
	size_t env_size;
	char **path;
} env_t;

typedef struct s_linked_list_instructions
{
	int nb;
	char **arr;
	struct linked_list_instructions *next;
} ll_t;

/* built in fcts */
void	cd_error(char *name);
void	change_directory(char **arr, env_t *core);
char	*cut_current_dir(char *str);
void	disp_env(env_t *core);
void	exit_mysh(char **arr);
void	select_set_env(env_t *core, char **arr);
void	unset_env(env_t *core, char **arr);

/* check x verify fcts */
bool	check_binaries(char *arg, env_t *core);
bool	check_existence(char *, env_t *);
bool	is_built_in(char *);
bool	is_pipes(char **);
bool	is_proc(char *, env_t *);

/* exec binary */
void	exec_built_in(char **arr, env_t *core);
void	exec_err(char *name);
void	exec_proc(char **arr, env_t *core);
char	**get_bin_path(void);
char	*get_exec_full_name(char *arg, char **ae);

/* minishell fcts */
bool	check_validity_arg_se(char *arg);
int	count_char(char *, char);
char	**cut_tab(char **, char *, int);
char	***get_tab_to_tab(char **, char *);
void	instruction(char **arr, env_t *core);
void	my_free_super_tab(char ***);
char	***my_super_tab(char *, char, char);
void	print_prompt(void);

/* redirections */

void do_redirection_instructions(char **, env_t *);
bool is_form_redirections(char **);
bool is_redirection(char *);
bool is_append_stdout(char **);
bool is_save_stdout(char **);
void append_into_file(char **, env_t *);
void save_into_file(char **, env_t *);
char *get_target_red(char **);
char **get_exec_inst(char **);


/* pipes */
void	do_pipes_instructions(char **, env_t *);
ll_t	*get_linked_instructions(char **);
int	get_nb_pipes(char **);

/* return fcts */
int	return_null_command(void);
bool	return_error_red(int);

/* env manips */
void	copy_env(char **dest, char **env, size_t size);
void	destroy_env(env_t *core);
env_t	*init_core(char **env);

#endif
