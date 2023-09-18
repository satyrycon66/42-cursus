/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 13:28:17 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/27 13:28:21 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	premiereligne(int x)
{
	int	largeur;

	largeur = 1;
	ft_putchar('A');
	while (largeur < x - 1)
	{
		ft_putchar('B');
		largeur++;
	}
	if (x != 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	milieu(int x, int y)
{
	int	largeur;
	int	hauteur;

	hauteur = 1;
	while (hauteur < y - 1)
	{
		ft_putchar('B');
		largeur = 1;
		while (largeur < x - 1)
		{
			ft_putchar(' ');
			largeur++;
		}
		if (x != 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		hauteur++;
	}
}

void	derniereligne(int x)
{
	int	largeur;

	largeur = 1;
	ft_putchar('C');
	while (largeur < x - 1)
	{
		ft_putchar('B');
		largeur++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush02(int x, int y)
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
