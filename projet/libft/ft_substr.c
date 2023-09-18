/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:52:30 by siroulea          #+#    #+#             */
/*   Updated: 2023/01/30 14:54:10 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substr2(size_t i, size_t len, unsigned int start, char const *s)
{
	size_t	i2;
	char	*str;

	i2 = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && i2 < len)
		{
			str[i2] = s[i];
			i2++;
		}
		i++;
	}
	str[i2] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start > (size_t)ft_strlen((char *)s))
	{
		len = 0;
		start = 0;
	}
	if (len > (size_t)ft_strlen((char *)&s[start]))
		len = (size_t)ft_strlen((char *)&s[start]);
	if (!s)
		return (NULL);
	str = ft_substr2(i, len, start, s);
	return (str);
}
