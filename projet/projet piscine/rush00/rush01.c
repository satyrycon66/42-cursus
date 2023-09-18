/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 13:25:25 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/27 13:25:28 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	premiereligne(int x)
{
	int	largeur;

	largeur = 1;
	ft_putchar('/');
	while (largeur < x - 1)
	{
		ft_putchar('*');
		largeur++;
	}
	if (x != 1)
		ft_putchar(92);
	ft_putchar('\n');
}

void	milieu(int x, int y)
{
	int	largeur;
	int	hauteur;

	hauteur = 1;
	while (hauteur < y - 1)
	{
		ft_putchar('*');
		largeur = 1;
		while (largeur < x - 1)
		{
			ft_putchar(' ');
			largeur++;
		}
		if (x != 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		hauteur++;
	}
}

void	derniereligne(int x)
{
	int	largeur;

	largeur = 1;
	ft_putchar(92);
	while (largeur < x - 1)
	{
		ft_putchar('*');
		largeur++;
	}
	if (x != 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	premiereligne(x);
	if (y != 1)
	{
		milieu(x, y);
		derniereligne(x);
	}
}
