/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:29:30 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/27 14:57:25 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main()
{
	int c ;
	int d ;
	c = 6;
	d = 4;
	ft_swap(&c , &d);
   printf("%d\n",c);
   printf("%d",d);
}*/
