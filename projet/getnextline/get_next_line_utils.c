/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:29:16 by siroulea          #+#    #+#             */
/*   Updated: 2023/05/09 11:11:00 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_free(char *str)
{
	if (str)
	{
		free(str);
		str = NULL;
	}
	return (NULL);
}


char	*ft_strjoing(char *s1, char *s2)
{
	char	*dest;
	int		i;
	int		i2;

	i = -1;
	i2 = -1;
	if (s1 == NULL)
	{
		s1 = ft_calloc(sizeof(char), 1);
		if (s1 == NULL)
			return (NULL);
		s1[0] = 0;
	}
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[++i2])
		dest[i + i2] = s2[i2];
	dest[i + i2] = '\0';
	return (s1 = ft_free(s1), dest);
}
