/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:05:48 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/29 16:47:05 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **list_a)
{
	t_stack	*current_a;
	t_stack	*last_nodes;
	t_stack	*new_end;
	int		i;

	i = 1;
	if (!list_a || !(*list_a)->next)
		return ;
	current_a = (*list_a);
	while (i != list_len(*list_a))
	{
		if (current_a->next->next == NULL)
		{
			new_end = current_a;
		}
		current_a = current_a->next;
		i++;
	}
	last_nodes = current_a;
	current_a = (*list_a)->next;
	last_nodes->next = (*list_a);
	new_end->next = NULL;
	(*list_a) = last_nodes;
	write(1, "rra\n", 4);
	return ;
}

void	rrb(t_stack **list_b)
{
	t_stack	*current_a;
	t_stack	*last_nodes;
	t_stack	*new_end;
	int		i;

	i = 1;
	if (!list_b || !(*list_b)->next)
		return ;
	current_a = (*list_b);
	while (i != list_len(*list_b))
	{
		if (current_a->next->next == NULL)
		{
			new_end = current_a;
		}
		current_a = current_a->next;
		i++;
	}
	last_nodes = current_a;
	current_a = (*list_b)->next;
	last_nodes->next = (*list_b);
	new_end->next = NULL;
	(*list_b) = last_nodes;
	write(1, "rrb\n", 4);
	return ;
}

void	rrr(t_stack *list_a, t_stack *list_b)
{
	rra(&list_a);
	rrb(&list_b);
}
