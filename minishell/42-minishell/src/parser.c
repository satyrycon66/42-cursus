/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpicard <alpicard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:09:36 by alpicard          #+#    #+#             */
/*   Updated: 2023/09/18 17:17:42 by alpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

typedef struct s_command
{
	char				*command;
	char				*args;
	struct s_command	*next;
	struct s_command	*prev;
}						t_command;

int	parser(char **input)
{
	if (!input || !input[0])
		return (0);
	return (1);
}