/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_majx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:34:04 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/17 11:40:58 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_ptr(unsigned int num)
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
			ft_putchar('A' + (num - 10));
	}
}

int	print_majx(unsigned int ptr)
{
	if (ptr == 0)
		ft_putchar('0');
	else
		ft_ptr(ptr);
	return (ft_ptr_len(ptr));
}
