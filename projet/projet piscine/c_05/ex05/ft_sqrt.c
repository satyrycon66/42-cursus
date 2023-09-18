/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:16:00 by siroulea          #+#    #+#             */
/*   Updated: 2022/12/11 13:16:06 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	sqrt = 2;
	while (sqrt < nb / 2 && sqrt < 46341)
	{
		if (sqrt * sqrt == nb)
		{
			return (sqrt);
		}
		sqrt++;
	}
	return (0);
}
/*#include<stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(400));
	return (0);
}*/
