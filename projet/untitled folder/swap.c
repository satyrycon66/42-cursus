/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:52:22 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/28 18:08:13 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
void	sa(t_stack *list_a)
{
	t_stack	*current;
	int		temp;

	current = list_a;
	if (current->nbr == '\0' || current->next->nbr == '\0')
	{
		write(1, "Error sb contien 1 ou moins 'a'\n", 32);
		return ;
	}
	temp = current->nbr;
	current->nbr = current->next->nbr;
	current->next->nbr = temp;
	write(1, "sa\n", 3);
}

// sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
// Ne fait rien s’il n’y en a qu’un ou aucun.
void	sb(t_stack *list_b)
{
	t_stack	*current;
	int		temp;

	current = list_b;
	if (current->nbr == '\0' || current->next->nbr == '\0')
	{
		write(1, "Error sb contien 1 ou moins 'b'\n", 32);
		return ;
	}
	temp = current->nbr;
	current->nbr = current->next->nbr;
	current->next->nbr = temp;
	write(1, "sb\n", 3);
}

// ss : sa et sb en même temps.
void	ss(t_stack *list_a, t_stack *list_b)
{
	t_stack	*current_a;
	t_stack	*current_b;
	int		temp;

	current_a = list_a;
	current_b = list_b;
	if (current_a->nbr == '\0' || current_a->next->nbr == '\0'
		|| current_b->nbr == '\0' || current_b->next->nbr == '\0')
	{
		write(1, "Error ss 'a' ou 'b' vide\n", 25);
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
