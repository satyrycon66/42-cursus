/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:05:50 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/21 10:27:23 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uputnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
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
