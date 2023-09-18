/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:54:27 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/17 09:21:20 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (3);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len + 2);
}

static void	ft_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_ptr(num / 16);
		ft_ptr(num % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar('0' + num);
		else
			ft_putchar('a' + (num - 10));
	}
}

int	ft_printptr(unsigned long long ptr)
{
	ft_putstr("0x");
	if (ptr == 0)
		ft_putchar('0');
	else
		ft_ptr(ptr);
	return (ft_ptr_len(ptr));
}
