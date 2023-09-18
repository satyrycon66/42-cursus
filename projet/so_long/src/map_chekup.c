/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_chekup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:25:44 by siroulea          #+#    #+#             */
/*   Updated: 2023/07/25 14:47:11 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	chekup_mapsize(char **map)
{
	int	i;
	int	j;
	int	maxj;
	int	maxi;

	maxi = ft_strlen(map[0]);
	maxj = ft_strlenj(map);
	j = 0;
	i = ft_strlen(map[0]);
	if (!(maxi - 1 >= maxj) || maxi > 41 || maxj > 21)
	{
		write(1, "Error\nmapsize\n", 14);
		return (0);
	}
	while (j < maxj - 1)
	{
		if (ft_strlen(map[j]) != i)
		{
			write(1, "Error\nmaplen\n", 13);
			return (0);
		}
		j++;
	}
	return (1);
}

int	chekup_contour(char **map)
{
	int		i;
	int		j;
	int		maxi;
	t_data	*data;

	data = get_data();
	j = 0;
	i = 0;
	maxi = ft_strlen(map[0]);
	data->maxj = ft_strlenj(map);
	while (map[j])
	{
		if (map[0][i] != '1' || map[j][0] != '1' || map[j][maxi - 2] != '1'
			|| map[data->maxj - 1][i] != '1')
			return (0);
		i++;
		if (map[j][i] == '\n' || map[j][i] == 0)
		{
			j++;
			i = 0;
		}
	}
	return (1);
}

int	chekup_character(char **map)
{
	int	i;
	int	j;
	int	maxj;
	int	maxi;

	i = 1;
	j = 1;
	maxj = ft_strlenj(map);
	maxi = ft_strlen(map[1]) - 1;
	while (j < maxj - 1)
	{
		if (map[j][i] != '0' && map[j][i] != 'P' && map[j][i] != 'C'
			&& map[j][i] != 'E' && map[j][i] != '1')
			return (0);
		if (map[j])
			i++;
		if (i == maxi)
		{
			j++;
			i = 1;
		}
	}
	
	return (1);
}

int	found_p(char **map, int *npj, int *npi)
{
	t_data	*data;
	int		i;
	int		j;

	data = get_data();
	i = 0;
	j = 0;
	while (map[++j])
	{
		while (map[j][i++])
		{
			if (map[j][i] == 'P')
			{
				*npj = j;
				*npi = i;
				data->playerj = j;
				data->playeri = i;
				return (0);
			}
		}
		i = 0;
	}
	return (1);
}

int	ft_mapchekup(char **map)
{
	if (chekup_mapsize(map) == 0)
		return (0);
	if (chekup_contour(map) == 0)
	{
		write(1, "Error\ncontour\n", 14);
		return (0);
	}
	if (chekup_character(map) == 0)
	{
		write(1, "Error\ncharacter\n", 16);
		return (0);
	}
	if (contchar(map, 0) == 0)
	{
		write(1, " Error\ncontchar\n", 16);
		return (0);
	}
	if (flood_fill_main(map, 0, 0) == 0)
	{
		write(1, "Error\nmap impossible\n", 21);
		return (0);
	}
	found_exit(map);
	return (1);
}
