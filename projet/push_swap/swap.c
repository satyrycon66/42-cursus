/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:52:22 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/30 10:05:44 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *list_a)
{
	t_stack	*current;
	int		temp;

	current = list_a;
	if (!current || !current->next->nbr)
	{
		write(2, "Error sa \n", 32);
		return ;
	}
	temp = current->nbr;
	current->nbr = current->next->nbr;
	current->next->nbr = temp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *list_b)
{
	t_stack	*current;
	int		temp;

	current = list_b;
	if (!current || !current->next->nbr)
	{
		write(2, "Error sb \n", 32);
		return ;
	}
	temp = current->nbr;
	current->nbr = current->next->nbr;
	current->next->nbr = temp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *list_a, t_stack *list_b)
{
	t_stack	*current_a;
	t_stack	*current_b;
	int		temp;

	current_a = list_a;
	current_b = list_b;
	if (!current_a->nbr || !current_a->next->nbr || !current_b->nbr
		|| !current_b->next->nbr)
	{
		write(2, "Error ss 'a' ou 'b' vide\n", 25);
		return ;
	}
	temp = current_a->nbr;
	current_a->nbr = current_a->next->nbr;
	current_a->next->nbr = temp;
	temp = current_b->nbr;
	current_b->nbr = current_b->next->nbr;
	current_b->next->nbr = temp;
	write(1, "ss\n", 3);
}
