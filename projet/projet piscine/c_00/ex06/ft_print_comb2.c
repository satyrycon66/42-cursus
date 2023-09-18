/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:58:16 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/24 16:00:53 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 97 && b <= 99)
	{
		print(48 + a / 10);
		print(48 + a % 10);
		print(' ');
		print(48 + b / 10);
		print(48 + b % 10);
		write(1, ", ", 2);
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
	write(1, "98 99", 5);
}
/*int main()
{
	ft_print_comb2();
}*/
