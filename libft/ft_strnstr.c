/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:48:41 by mdelauna          #+#    #+#             */
/*   Updated: 2013/12/08 11:41:26 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		strnstr_equ(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s2[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0' && n >= ft_strlen(s2))
	{
		if (*s1 == s2[0])
		{
			if (strnstr_equ(s1, s2) == 1)
			{
				return ((char *)s1);
			}
		}
		n--;
		s1++;
	}
	return (NULL);
}
