/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 15:11:00 by mdelauna          #+#    #+#             */
/*   Updated: 2014/05/08 15:56:34 by fteuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdlib.h>
#include <unistd.h>

void		free_arr(char ***arr)
{
	int i;

	i = 0;
	if (!arr)
		return ;
	while ((*arr)[i])
	{
		ft_strdel(*arr + i);
		i++;
	}
	free(*arr);
	*arr = NULL;
}

char		*get_path(char **envp, char **cmd)
{
	char	**paths;
	char	*path;

	paths = ft_strsplit(envp[0] + 5, ':');
	path = search_path(paths, *cmd);
	free_arr(&paths);
	return (path);
}

int			ft_access(char *path)
{
	if (access(path, F_OK) == -1)
		ft_putstr_fd("open: no such file or directory\n", 2);
	else if (access(path, R_OK) == -1)
		ft_putstr_fd("open: permission denied\n", 2);
	else if (access(path, W_OK) == -1)
		ft_putstr_fd("open: permission denied\n", 2);
	else
		return (1);
	return (0);
}
