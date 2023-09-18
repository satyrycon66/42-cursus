/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:19:48 by siroulea          #+#    #+#             */
/*   Updated: 2023/03/31 11:51:55 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
//free ce qui as été ecrie,conserve dans rest c'qui a apres le \n si besoin

char	*ft_freestash(char *stash)
{
	int		istash;
	int		irest;
	char	*rest;

	istash = 0;
	while (stash[istash] != '\n' && stash[istash] != '\0')
		istash++;
	if (!stash[istash])
	{
		free(stash);
		return (NULL);
	}
	istash++;
	rest = ft_calloc(sizeof(char), (ft_strlen(stash) - istash) + 1);
	irest = 0;
	while (stash[istash])
		rest[irest++] = stash[istash++];
	rest[irest] = '\0';
	if (istash == 0)
		ft_free(rest);
	stash = ft_free(stash);
	return (rest);
}
//decortique le retour de ft_read pour separer les phrase si besoin

char	*ft_get_line(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!*stash)
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	line = ft_calloc(sizeof(char), i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}
//li le fichier et calloc a la grosseur du buffersize sur une ligne temporaire

char	*ft_read(int fd, char *stash)
{
	char	*buffer;
	int		retread;

	retread = 1;
	buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_strchr(stash, '\n') && retread != 0)
	{
		retread = read(fd, buffer, BUFFER_SIZE);
		if (retread == 0)
			break ;
		if (retread == -1)
			return (free(stash), free(buffer), NULL);
		buffer[retread] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	ft_free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (NULL);
	line = NULL;
	stash[fd] = ft_read(fd, stash[fd]);
	if (!stash[fd])
		return (NULL);
	line = ft_get_line(stash[fd]);
	stash[fd] = ft_freestash(stash[fd]);
	return (line);
}
