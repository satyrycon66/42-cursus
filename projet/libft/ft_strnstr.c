/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:55:01 by siroulea          #+#    #+#             */
/*   Updated: 2023/01/30 14:04:43 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	{
		if (needle[0] == '\0')
			return ((char *)haystack);
		i2 = 0;
		while (i2 < len && haystack[i2])
		{
			i = 0;
			while (i2 < len && needle[i] && haystack[i2]
				&& needle[i] == haystack[i2])
			{
				++i;
				++i2;
			}
			if (needle[i] == '\0')
				return ((char *)&haystack[i2 - i]);
			i2 = i2 - i + 1;
		}
		return (0);
	}
}
