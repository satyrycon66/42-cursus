/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:56:25 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/24 15:47:48 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7' && b <= '8' && c <= '9')
	{
		print(a, b, c);
		if (a != '7')
			write(1, ", ", 2);
		c++;
		if (c > '9')
		{
			b++;
			c = b + 1;
		}
		if (b > '8')
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}
/*int main()
{
	ft_print_comb();
}*/
