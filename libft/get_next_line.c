/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/31 14:47:52 by mdelauna          #+#    #+#             */
/*   Updated: 2014/02/02 12:17:14 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int		end_of_line(char *buffer1)
{
	int			i;

	i = 0;
	if (buffer1 == NULL)
		return (0);
	while (buffer1[i] != '\0')
	{
		if (buffer1[i] == '\n')
		{
			buffer1[i] = '\0';
			return (1);
		}
		i++;
	}
	return (0);
}

static int		return_value(int status_read, char *buffer1, char **line)
{
	if (status_read != BUFF_SIZE && ft_strlen(*line) == 0
		&& ft_strlen(buffer1) == 0)
	{
		return (0);
	}
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static char	*buffer1 = NULL;
	char		*buffer2;
	int			status_read;

	status_read = BUFF_SIZE;
	if (status_read < 1)
		return (-1);
	while (!(end_of_line(buffer1)) && status_read == BUFF_SIZE)
	{
		buffer2 = (char *)ft_memalloc(sizeof(char) * (BUFF_SIZE + 1));
		if ((status_read = read(fd, buffer2, BUFF_SIZE)) == -1)
			return (-1);
		buffer2[status_read] = '\0';
		*line = ft_strjoin(buffer1, buffer2);
		free(buffer2);
		free(buffer1);
		buffer1 = *line;
	}
	*line = ft_strdup(buffer1);
	buffer2 = ft_strdup(buffer1 + ft_strlen(*line) + 1);
	free(buffer1);
	buffer1 = buffer2;
	return (return_value(status_read, buffer1, line));
}
