/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:11:20 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/27 14:56:01 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
int main()
{
	int tab[]={0,1,2,3,4,5};
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d,%d",tab[0], tab[1],tab[2],tab[3],tab[4],tab[5]);

}
