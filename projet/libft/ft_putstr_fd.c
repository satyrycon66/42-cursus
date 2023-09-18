/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:29:40 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/06 13:58:40 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != 0)
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <fcntl.h>
// int main()
// {
//     int fd;

//     fd = open("txt.txt",O_WRONLY | O_APPEND);

//     ft_putstr_fd("hello",fd );
// }
