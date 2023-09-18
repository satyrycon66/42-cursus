/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:11:45 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/29 10:23:19 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//tri les stack plus grande que 5
void	sort_big_stack(t_stack **list_a, t_stack **list_b)
{
	int		j;
	int		len;
	t_stack	*current_a;

	j = 0;
	current_a = (*list_a);
	while (a_is_sort(&current_a) != 1)
	{
		len = list_len(current_a);
		while (len--)
		{
			if (((current_a)->index >> j) & 1)
				ra(&current_a);
			else
				pb(&current_a, &*list_b);
		}
		j++;
		while (list_len(*list_b) > 0)
		{
			pa(&*list_b, &current_a);
		}
		*list_a = current_a;
	}
}

//tri les liste de 3 chiffre
void	sort_3nbr(t_stack **list_a)
{
	t_stack	*current_a;

	current_a = (*list_a);
	if (current_a->next->nbr > current_a->nbr
		&& current_a->next->nbr < current_a->next->next->nbr)
	{
		ra(&current_a);
		ra(&current_a);
	}
	if ((current_a->next->nbr > current_a->nbr
			&& current_a->next->nbr > current_a->next->next->nbr)
		|| (current_a->next->nbr < current_a->nbr
			&& current_a->next->nbr > current_a->next->next->nbr))
	{
		sa(current_a);
		ra(&current_a);
	}
	if (current_a->next->nbr < current_a->nbr
		&& current_a->next->nbr < current_a->next->next->nbr
		&& current_a->nbr < current_a->next->next->nbr)
		sa(current_a);
	if (current_a->next->nbr < current_a->nbr
		&& current_a->next->nbr < current_a->next->next->nbr)
		ra(&current_a);
	*list_a = current_a;
}

//tri les list de 4 chiffre
void	sort_4nbr(t_stack **list_a, t_stack **list_b)
{
	t_stack	*current_a;

	current_a = (*list_a);
	while (1)
	{
		if (current_a->index == 1)
			pb(&current_a, list_b);
		else
			ra(&current_a);
		if (list_len(*list_b) == 1)
			break ;
	}
	sort_3nbr(&current_a);
	pa(list_b, &current_a);
	*list_a = current_a;
}

void	sort_5nbr(t_stack **list_a, t_stack **list_b)
{
	t_stack	*current_a;

	current_a = (*list_a);
	while (1)
	{
		if (how_manyshot_ra(&current_a, 1) == 0)
			pb(&current_a, list_b);
		else
			best_way(&current_a, 1);
		if (list_len(*list_b) == 1)
			break ;
	}
	while (1)
	{
		if (current_a->index == 2)
			pb(&current_a, list_b);
		else
			best_way(&current_a, 2);
		if (list_len(*list_b) == 2)
			break ;
	}
	sort_3nbr(&current_a);
	pa(list_b, &current_a);
	pa(list_b, &current_a);
	*list_a = current_a;
}

void	sort(t_stack **list_a, t_stack **list_b, int argc)
{
	t_stack	*current_a;

	current_a = (*list_a);
	if (argc == 2)
		return ;
	if (argc == 3)
		sa(*list_a);
	if (argc == 4)
		sort_3nbr(list_a);
	if (argc == 5)
		sort_4nbr(list_a, list_b);
	if (argc == 6)
		sort_5nbr(list_a, list_b);
	if (argc >= 7)
		sort_big_stack(list_a, list_b);
}
