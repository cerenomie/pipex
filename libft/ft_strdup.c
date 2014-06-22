/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:26:26 by mdelauna          #+#    #+#             */
/*   Updated: 2014/01/31 13:14:47 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;

	if (s1)
	{
		i = 0;
		if ((cpy = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s1) + 1))))
		{
			while (s1[i] != '\0')
			{
				cpy[i] = (char)s1[i];
				i++;
			}
			cpy[i] = '\0';
			return (cpy);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
