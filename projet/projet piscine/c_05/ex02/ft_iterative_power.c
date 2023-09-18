/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:05:46 by siroulea          #+#    #+#             */
/*   Updated: 2022/12/05 15:05:52 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			nb *= temp;
			i++;
		}
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(0, 1));
}
*/