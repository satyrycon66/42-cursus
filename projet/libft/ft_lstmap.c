/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:03:09 by siroulea          #+#    #+#             */
/*   Updated: 2023/02/01 15:52:05 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*curr;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = (f(lst->content));
		curr = ft_lstnew(content);
		if (!curr)
		{
			ft_lstclear(&new_list, del);
			free(content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, curr);
		lst = lst->next;
	}
	return (new_list);
}
