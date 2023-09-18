/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:48:00 by siroulea          #+#    #+#             */
/*   Updated: 2023/01/30 14:03:42 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tdest;

	tdest = (char *)dest;
	if (!dest || !src)
		return (NULL);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			tdest[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}
