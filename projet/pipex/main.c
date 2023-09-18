/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:20:03 by siroulea          #+#    #+#             */
/*   Updated: 2023/09/18 13:45:03 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*found_path(char *argv, char **env)
{
	char	**pathlist;
	char	*path;
	char	*temp;
	int		i;

	i = 0;
	//temp que mon environement n'est pas == path
	while (ft_strnstr(env[i], "PATH", 4) == 0)
		i++;
	pathlist = ft_split(env[i], ':');
	i = 0;
	while (pathlist[i])
	{
		//rajoute un / a la fin de mon path
		temp = ft_strjoin(pathlist[i++], "/");
		//rajoute le argv apres "qui est l'executable d'un programe"
		path = ft_strjoin(temp, argv);
		//si il trouve mon lexecutable dans le path retourne le path
		if (access(path, F_OK) == 0)
		{
			ft_free(*pathlist);
			return (path);
		}
	}
	return (0);
}

void	do_cmd(char *argv, char **env)
{
	char	**cmd;
	char	*path;
	int		i;

	i = 0;
	//je fait un st split pour enlenver un -l dans(ls -l) exemples
	cmd = ft_split(argv, 32);
	if (!cmd)
	{
		free(cmd);
		perror("no command");
		exit(EXIT_FAILURE);
	}
	//trouve mon path
	path = found_path(cmd[0], env);
	if (!path)
	{
		ft_free(path);
		perror("Command path not found");
		exit(EXIT_FAILURE);
	}
	if (execve(path, cmd, env) == -1)
	{
		perror("execve error");
		exit(EXIT_FAILURE);
	}
	return ;
}

void	child(int argc, char **argv, char **env, int *fd, int i)
{
	int	file;

	file = open(argv[0], O_RDONLY, 0666);
	if (file == -1)
	{
		perror("error open files");
		exit(EXIT_FAILURE);
	}
	close(fd[0]);
	dup2(fd[1], 1);
	close(fd[1]);
	dup2(file, 0);
	close(file);
	do_cmd(argv[i], env);
	exit(1);
}

void	parent(int argc, char **argv, char **env, int *fd)
{
	int	file;

	file = open(argv[argc - 2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (file == -1)
	{
		perror("error open/new file");
		exit(EXIT_FAILURE);
	}
	close(fd[1]);
	dup2(fd[0], 0);
	close(fd[0]);
	dup2(file, 1);
	close(file);
	do_cmd(argv[argc - 3], env);
	exit(1);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid;
	int		i;

	i = 1;
	++argv;
	if (argc >= 5)
	{
		if (pipe(fd) == -1)
		{
			perror("pipe");
			exit(EXIT_FAILURE);
		}
		while (i < argc - 3)
			pid = fork();
		if (pid == -1)
		{
			perror("Fork error");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			while (i < argc - 3)
			{
				// printf("%d\n", i);
				// printf("%d\n", argc - 3);
				child(argc, argv, envp, fd, i);
				i++;
				waitpid(pid, NULL, 0);
			}
		}
		if (pid > 0)
		{
			parent(argc, argv, envp, fd);
		}
	}
	else
	{
		perror("Bad arguments");
		exit(EXIT_FAILURE);
	}
	return (0);
}
// int main(int argc,char **argv,char **env)
// {
//     // int pipefd[1];
//     // int pipefd2[2];

//     // pid_t pid;
//     char *path;

//     // pipefd[1] = argv[1];
//     // pipefd2[2] = argv[2];

//    int i = 0;
//    int j = 0;
// //    char *temp;
//    path = found_path("ls",env);

//     printf("%s",path);
//     return (0);
//     //crée un pipe. en cas d'échec
// //     if (pipe(pipefd) == -1)
// //     {
// //         perror("pipe");
// //         exit(EXIT_FAILURE);
// //     }
// //     //crée un processus fils
// //      pid = fork();
// //     //en cas d'echec, on exit!
// //     if(pid == -1)
// //     {
// //         perror("fork");
// //          exit(EXIT_FAILURE);
// //     }
// //     //si pid = 0 c'est un processus fils
// //     else if(pid == 0)
// //     {

// //     }
// }

// Fonctions externes autorisées
// • open, close, read, write,
// malloc, free, perror,
// strerror, access, dup, dup2,
// execve, exit, fork, pipe,
// unlink, wait, waitpid
// • ft_printf et tout équivalent
// que VOUS avez codé