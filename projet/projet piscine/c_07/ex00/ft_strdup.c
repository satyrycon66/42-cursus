/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:53:28 by siroulea          #+#    #+#             */
/*   Updated: 2022/12/08 09:53:34 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char *ft_strdup(char *src)
{
    char *dest;

    dest = (char*)malloc(sizeof(*dest) * (*src + 1));
    if(dest == NULL)
    {
        return(0);
    }
    else 
    {
        ft_strcpy(dest,src);
        return(dest);
    }



}
int main()
{
     char c[] = "helllo";
     ft_strdup(c);
     printf("%s",ft_strdup(c));
}