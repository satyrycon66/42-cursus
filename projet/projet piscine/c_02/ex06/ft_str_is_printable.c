/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:53:18 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/28 12:53:20 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
int main()
{
    printf("%d\n",ft_str_is_printable("adgfagag"));
}
