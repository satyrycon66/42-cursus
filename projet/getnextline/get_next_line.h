/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:16:18 by siroulea          #+#    #+#             */
/*   Updated: 2023/03/21 15:13:02 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10

# endif
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_free(char *str);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_read(int fd, char *stash);
char	*ft_get_line(char *stash);
char	*ft_freestash(char *stash);

#endif
