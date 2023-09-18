/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:33:55 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/29 10:22:46 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	no_double(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= argc - 1)
	{
		while (j <= argc - 1)
		{
			if (j == argc - 1 && i == argc - 1)
				break ;
			else if (i == j && j != argc - 1)
				j++;
			if (ft_strcmp(argv[i], argv[j]) == 0)
			{
				write(1, "Error double argv", 17);
				return (0);
			}
			j++;
		}
		i++;
		j = 1;
	}
	return (1);
}

int	no_character(char **argv, int i, int j)
{
	while (argv[++i])
	{
		if ((argv[i][0] == 45 && argv[i][1] == 0) || (argv[i][0] == 45
				&& argv[i][1] == '0' && argv[i][2] == 0))
		{
			write(1, "Error Character", 14);
			return (0);
		}
		if (argv[i][0] == 45)
			j++;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '0' && argv[i][j] <= '9'))
				j++;
			else
			{
				write(1, "Error Character", 14);
				return (0);
			}
		}
		j = 0;
	}
	return (1);
}

int	check_max_min_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= argc)
	{
		if (ft_atoi(argv[i]) < -2147483648 || ft_atoi(argv[i]) > 2147483647)
		{
			write(1, "Error max min int", 17);
			return (0);
		}
		i++;
	}
	return (1);
}

int	parsing(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
	}
	if (no_double(argc, argv) == 0)
		return (0);
	if (no_character(argv, 0, 0) == 0)
		return (0);
	if (check_max_min_int(argc, argv) == 0)
		return (0);
	return (1);
}
