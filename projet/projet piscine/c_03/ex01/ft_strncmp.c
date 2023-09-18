/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:30:01 by siroulea          #+#    #+#             */
/*   Updated: 2022/11/30 12:30:04 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <string.h>
int	main(void)
{
	unsigned int	n;

    n = 0;
	char	str[]= "Hel";
 	char 	str2[] = "He";
	
	printf("%d\n", ft_strncmp(str, str2, 3));
	printf("%d\n", strncmp(str, str2, 3));
} 