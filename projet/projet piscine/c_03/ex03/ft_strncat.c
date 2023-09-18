/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:23:55 by siroulea          #+#    #+#             */
/*   Updated: 2022/12/01 11:23:58 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[i2] && i2 < nb)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
char dest[]= "salut"; 
char	src[] = "toiiiiii";

printf("%s", ft_strncat(dest,src,3));
}*/