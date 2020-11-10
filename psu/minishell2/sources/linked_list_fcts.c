/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** linked list functions
*/

#include "ms.h"

ll_t *create_link_instruction(char **cut_tab, int i)
{
	ll_t *ptr = my_malloc(sizeof(*ptr));

	ptr->nb = i;
	ptr->arr = cut_tab;
	return (ptr);
}

ll_t *get_instrs_stored(char **arr, int cnt)
{
	ll_t **ptr = my_malloc(sizeof(ll_t *) * (cnt + 1));

	for (int i = 0; i <= cnt; i++)
		ptr[i] = create_link_instruction(cut_tab(arr, "|", i), i);
	for (int i = 0; i < cnt; ptr[i]->next = ptr[i + 1], i++);
	ptr[cnt]->next = NULL;
	my_free(ptr);
	return (ptr[0]);
}

ll_t *get_linked_instructions(char **arr)
{
	ll_t *ptr;
	int cnt = get_nb_pipes(arr);

	if (cnt == -1)
		return (NULL);
	ptr = get_instrs_stored(arr, cnt);
	return (ptr);
}
