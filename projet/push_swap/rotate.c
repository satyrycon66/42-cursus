/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:56:00 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/29 16:47:15 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **list_a)
{
	t_stack	*current_a;
	t_stack	*new_end;
	int		i;

	i = 1;
	if (!list_a || !(*list_a)->next)
	{
		write(2, "Error ra 'a' vide\n", 18);
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

void	rb(t_stack **list_b)
{
	t_stack	*current_b;
	t_stack	*new_end;
	int		i;

	i = 1;
	if (!list_b || !(*list_b)->next)
	{
		write(2, "Error ra 'a' vide\n", 18);
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

void	rr(t_stack *list_a, t_stack *list_b)
{
	ra(&list_a);
	rb(&list_b);
}
