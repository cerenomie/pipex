/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/31 14:42:04 by mdelauna          #+#    #+#             */
/*   Updated: 2014/04/22 16:30:36 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int			ft_strfillsplit(char const *s, char **split, int number, char c)
{
	int		i;

	i = 0;
	split[number] = (char *)ft_memalloc(sizeof(char) + ft_strlen(s) + 1);
	while (s[i] != (char)c && s[i] != '\0')
	{
		split[number][i] = s[i];
		i++;
	}
	split[number][i] = '\0';
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		number;

	if ((split = (char **)ft_memalloc(sizeof(char *) * ft_strlen(s) + 1))
		&& s != NULL)
	{
		i = 0;
		number = 0;
		while (s[i] != '\0' && i != (int)ft_strlen(s))
		{
			if (s[i] != (char)c)
			{
				i += ft_strfillsplit(s + i, split, number, c);
				number++;
			}
			else
				i++;
		}
		split[number] = '\0';
		return (split);
	}
	return (NULL);
}
