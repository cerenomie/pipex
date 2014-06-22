/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 15:11:09 by mdelauna          #+#    #+#             */
/*   Updated: 2014/05/06 15:11:10 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <unistd.h>

char		*search_path(char **paths, char *cmd)
{
	int				i;
	char			*path;
	char			*part_path;

	i = 0;
	while (paths[i] && cmd[1] != '/')
	{
		part_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(part_path, cmd);
		ft_strdel(&part_path);
		if (access(path, F_OK) == 0)
			return (path);
		ft_strdel(&path);
		i++;
	}
	if (cmd[0] == '/')
		return ("");
	if (access(cmd, F_OK) == 0)
		return (cmd);
	return (NULL);
}
