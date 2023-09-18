/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:51:01 by siroulea          #+#    #+#             */
/*   Updated: 2023/06/14 15:52:03 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_data	*get_data(void)
{
	static t_data	*data = NULL;

	if (!data)
	{
		data = ft_calloc(1, sizeof(t_data));
		return (data);
	}
	return (data);
}

void	free_map(char **map)
{
	int	j;

	j = 0;
	while (j != ft_strlenj(map))
	{
		free(map[j]);
		map[j] = NULL;
		j++;
	}
	return ;
}

void	print_background_image(int j, int i)
{
	t_data	*data;

	data = get_data();
	if (data->map[j][i] == '1')
		mlx_image_to_window(data->mlx, data->ground_img, i * 64, j * 64);
	else if (data->map[j][i] == 'P')
		mlx_image_to_window(data->mlx, data->ground_img, i * 64, j * 64);
	else if (data->map[j][i] == 'C')
		mlx_image_to_window(data->mlx, data->ground_img, i * 64, j * 64);
	else if (data->map[j][i] == 'E')
		mlx_image_to_window(data->mlx, data->ground_img, i * 64, j * 64);
	else if (data->map[j][i] == '0')
		mlx_image_to_window(data->mlx, data->ground_img, i * 64, j * 64);
}

void	print_background_map(void)
{
	t_data	*data;
	int		i;
	int		j;

	data = get_data();
	j = 0;
	i = 0;
	while (j < ft_strlenj(data->map))
	{
		while (i < ft_strlen(data->map[j]) - 1)
		{
			print_background_image(j, i);
			i++;
		}
		j++;
		i = 0;
	}
}

int32_t	main(int argc, char **argv)
{
	t_data	*data;

	data = get_data();
	if (argc != 2)
	{
		write(1, "Error\nwrong argc\n", 17);
		return (0);
	}
	if (chekup_ber(argv[1]) == 0)
		return (0);
	extract_map(argv[1], 0, 0);
	if (ft_mapchekup(data->map) == 0)
		return (0);
	data->mlx = mlx_init((ft_strlen(data->map[0]) - 1) * 64,
			ft_strlenj(data->map) * 64, "so_long", false);
	if (!data->mlx)
		exit(EXIT_FAILURE);
	put_image();
	mlx_key_hook(data->mlx, &hook, data);
	mlx_loop(data->mlx);
	mlx_terminate(data->mlx);
	return (EXIT_SUCCESS);
}
