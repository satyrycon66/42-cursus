/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:20:09 by siroulea          #+#    #+#             */
/*   Updated: 2022/12/05 14:20:12 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		while (temp)
		{
			nb = nb * temp;
			temp--;
		}
	}
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
}*/