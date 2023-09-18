/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:56:00 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/28 17:49:28 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ra (rotate a) : Décale d’une position vers le
//haut tous les élements de la pile a.
// Le premier élément devient le dernier.
void	ra(t_stack **list_a)
{
	t_stack	*current_a;
	t_stack	*new_end;
	int		i;

	i = 1;
	if (!list_a || !(*list_a)->next)
	{
		write(1, "Error ra 'a' vide\n", 18);
		return ;
	}
	current_a = (*list_a);
	while (current_a)
	{
		if (current_a->next == NULL)
			new_end = current_a;
		current_a = current_a->next;
		i++;
	}
	new_end->next = (*list_a);
	current_a = (*list_a)->next;
	(*list_a)->next = NULL;
	(*list_a) = current_a;
	write(1, "ra\n", 3);
	return ;
}

// rb (rotate b) : Décale d’une position vers le
//haut tous les élements de la pile b.
// Le premier élément devient le dernier.
void	rb(t_stack **list_b)
{
	t_stack	*current_b;
	t_stack	*new_end;
	int		i;

	i = 1;
	if (!list_b || !(*list_b)->next)
	{
		write(1, "Error ra 'a' vide\n", 18);
		return ;
	}
	current_b = (*list_b);
	while (current_b)
	{
		if (current_b->next == NULL)
			new_end = current_b;
		current_b = current_b->next;
		i++;
	}
	new_end->next = (*list_b);
	current_b = (*list_b)->next;
	(*list_b)->next = NULL;
	(*list_b) = current_b;
	write(1, "rb\n", 3);
	return ;
}

// rr : ra et rb en même temps.
void	rr(t_stack *list_a, t_stack *list_b)
{
	ra(&list_a);
	rb(&list_b);
}
