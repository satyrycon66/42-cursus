/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:50:23 by siroulea          #+#    #+#             */
/*   Updated: 2022/12/06 15:50:28 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	i2;

	i = 0;
	i2 = argc - 1;
	while (i2 > 0)
	{
		write(1, &argv[i2][i], 1);
		i++;
		if (argv[i2][i] == '\0')
		{
			write(1, "\n", 1);
			i2--;
			i = 0;
		}
	}
}
