/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:10:42 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/31 10:46:26 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_clear(t_stack **list)
{
	t_stack	*current_a;
	t_stack	*temp;

	current_a = (*list);
	while (current_a)
	{
		temp = current_a;
		current_a = current_a->next;
		free(temp);
	}
}

int	list_len(t_stack *lst)
{
	int		count;
	t_stack	*current;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

long long	ft_atoi(const char *str)
{
	int			sign;
	long long	res;
	int			i;

	i = 0;
	res = 0;
	sign = 1;
	if (!str)
		return (0);
	while (((str[i] != '\0' && str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] != '\0' && str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res *= sign;
	return (res);
}

void	print_pile(t_stack *data, char name)
{
	t_stack	*tmp;

	tmp = data;
	printf("  %c\n", name);
	while (tmp)
	{
		printf("[%d] \n", tmp->nbr);
		tmp = tmp->next;
	}
	printf("\n");
}

void	print_index(t_stack *data, char name)
{
	t_stack	*tmp;

	tmp = data;
	printf("  %c\n", name);
	while (tmp)
	{
		printf("[%d] \n", tmp->index);
		tmp = tmp->next;
	}
	printf("\n");
}
