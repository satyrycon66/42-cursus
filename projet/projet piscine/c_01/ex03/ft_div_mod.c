/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:05:26 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/27 15:00:30 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
    int e;
    int f;
    int c;
    int d;
    e = 36;
    f = 6;
    ft_div_mod(e,f,&c,&d);
    printf("%d\n",c);
    printf("%d",d);
}*/
