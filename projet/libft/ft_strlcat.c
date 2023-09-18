/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:31:56 by siroulea          #+#    #+#             */
/*   Updated: 2023/01/30 14:04:27 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;
	size_t	ret;

	i = 0;
	if (!src || !dst)
		return (0);
	lendest = ft_strlen(dst);
	lensrc = ft_strlen((char *)src);
	if (size > lendest)
		ret = lensrc + lendest;
	else
		ret = lensrc + size;
	while ((lendest + 1) < size && ((char *)src)[i])
	{
		dst[lendest] = ((char *)src)[i];
		lendest++;
		i++;
	}
	dst[lendest] = 0;
	return (ret);
}
