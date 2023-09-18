/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:36:59 by siroulea          #+#    #+#             */
/*   Updated: 2023/09/04 10:38:33 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*creat_node(int nbr)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->nbr = nbr;
	node->next = NULL;
	return (node);
}

t_stack	*creat_lista(char **argv)
{
	t_stack	*head;
	t_stack	*current;
	int		i;

	i = 0;
	head = creat_node(atoi(argv[i++]));
	if (!head)
		return (NULL);
	current = head;
	while (argv[i])
	{
		current->next = creat_node(atoi(argv[i]));
		current = current->next;
		i++;
	}
	return (head);
}

int	how_manyshot_ra(t_stack **list, int nbr)
{
	t_stack	*current_a;
	int		i;

	i = 0;
	current_a = (*list);
	while (current_a)
	{
		if (current_a->index == nbr)
			return (i);
		else
		{
			i++;
			current_a = current_a->next;
		}
	}
	return (i);
}

void	best_way(t_stack **list_a, int nbr)
{
	int	how;
	int	list_l;

	how = how_manyshot_ra(list_a, nbr);
	list_l = (list_len(*list_a)) / 2;
	if (how <= list_l)
	{
		ra(&*list_a);
		return ;
	}
	else
	{
		rra(&*list_a);
		return ;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	i = 0;
	if (parsing(argc, argv) == 0)
		return (0);
	a = creat_lista(argv + 1);
	if (!a)
		return (0);
	if (a_is_sort(&a) != 0)
	{
		list_clear(&a);
		return (0);
	}
	index_stack(&a);
	sort(&a, &b, argc);
	list_clear(&a);
	return (0);
}
