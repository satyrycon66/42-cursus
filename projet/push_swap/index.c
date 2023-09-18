/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:07:58 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/29 16:46:40 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_on_all(t_stack **list_a)
{
	t_stack	*current_a;
	int		i;

	i = 0;
	current_a = (*list_a);
	while (current_a)
	{
		if (current_a->index >= 1)
			current_a = current_a->next;
		else
			return (0);
	}
	return (1);
}

void	index_stack(t_stack **list_a)
{
	t_stack	*current_a;
	t_stack	*maybe_new;
	int		i;

	i = 1;
	current_a = (*list_a);
	while (index_on_all(list_a) != 1)
	{
		maybe_new = current_a;
		while (current_a)
		{
			if (maybe_new->index != 0)
				maybe_new = current_a->next;
			if (current_a->nbr < maybe_new->nbr && current_a->index == 0)
			{
				maybe_new = current_a;
				current_a = (*list_a);
			}
			current_a = current_a->next;
		}
		maybe_new->index = i;
		i++;
		current_a = (*list_a);
	}
}

int	a_is_sort(t_stack **list_a)
{
	t_stack	*current_a;

	current_a = (*list_a);
	while (current_a->next != NULL)
	{
		if (current_a->nbr < current_a->next->nbr)
			current_a = current_a->next;
		else
			return (0);
	}
	return (1);
}
