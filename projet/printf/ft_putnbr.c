/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:46:26 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/17 09:31:16 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
		i += ft_putnbr(n);
	}
	else if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar(n % 10 + 48);
	}
	else
	{
		i += ft_putchar(n + 48);
	}
	return (i);
}
