/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:54:44 by siroulea          #+#    #+#             */
/*   Updated: 2023/09/04 10:32:09 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **list_b, t_stack **list_a)
{
	t_stack	*current_a;
	t_stack	*current_b;

	if (!list_b || !*list_b)
	{
		write(2, "Error pb 'b' vide\n", 18);
		return ;
	}
	current_b = (*list_b)->next;
	current_a = (*list_a);
	(*list_a) = (*list_b);
	(*list_a)->next = current_a;
	(*list_b) = current_b;
	write(1, "pa\n", 3);
}

void	pb(t_stack **list_a, t_stack **list_b)
{
	t_stack	*current_a;
	t_stack	*current_b;

	if (!list_a || !*list_a)
	{
		write(2, "Error pb 'a' vide\n", 18);
		return ;
	}
	current_a = (*list_a)->next;
	current_b = (*list_b);
	(*list_b) = (*list_a);
	(*list_b)->next = current_b;
	(*list_a) = current_a;
	write(1, "pb\n", 3);
}
