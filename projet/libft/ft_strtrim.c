/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:34:54 by siroulea          #+#    #+#             */
/*   Updated: 2023/01/30 14:53:27 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isin(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		i2;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_isin(s1[i], set))
		i++;
	start = i;
	end = ft_strlen((char *)s1) - 1;
	while (end >= start && ft_isin(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	i = start;
	i2 = 0;
	while (i <= end)
		str[i2++] = s1[i++];
	str[i2] = '\0';
	return (str);
}
