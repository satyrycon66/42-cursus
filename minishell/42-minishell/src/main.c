/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpicard <alpicard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:39:24 by alpicard          #+#    #+#             */
/*   Updated: 2023/09/18 17:04:09 by alpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"
#include <readline/readline.h>
#include <readline/history.h>

void	get_paths(t_minishell *minishell)
{
	int	x;

	x = 0;
	while (ft_strncmp(minishell->env[x], "PATH=", 5))
		x++;
	minishell->paths = ft_split(&(minishell->env[x])[5], ':');
}

int	main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	char *input;
	if (ac > 1)
		return (0);

	t_minishell minishell;
	minishell.env = env;
	get_paths(&minishell);
	
	//While 1 ???
	while (1)
	{
		input = readline("Minishell-1.0$ ");
		if (!input)
			break ;
		add_history(input);

		// Do stuff...

		free(input);
	}
	return (0);
}