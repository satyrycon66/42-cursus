/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:23:01 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/24 09:23:03 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}

/*int	main()
{
int x=36;
int y=6;

int *a=&x;
int *b=&y;

    ft_ultimate_div_mod(a, b);
   printf("%d\n%d",*a ,*b);
}*/
