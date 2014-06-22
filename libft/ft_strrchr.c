/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:22:35 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 09:00:15 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*add;

	if (!s)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			i = 1;
			add = (char *)s;
		}
		s++;
	}
	if (*s == c)
	{
		i = 1;
		add = (char *)s;
	}
	if (i == 1)
		return (add);
	else
		return (NULL);
}
