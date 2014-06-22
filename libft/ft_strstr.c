/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:41:29 by mdelauna          #+#    #+#             */
/*   Updated: 2013/12/08 11:41:50 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		strstr_equ(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s2[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(const char *s1, const char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0')
	{
		if (*s1 == s2[0])
		{
			if (strstr_equ(s1, s2) == 1)
			{
				return ((char *)s1);
			}
		}
		s1++;
	}
	return (NULL);
}
