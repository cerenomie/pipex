/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:29:31 by mdelauna          #+#    #+#             */
/*   Updated: 2014/01/22 14:50:03 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*str1;
	char		*str2;

	if (n)
	{
		i = 0;
		str1 = (char *)s1;
		str2 = (char *)s2;
		while (i < n)
		{
			if (str1[i] != str2[i])
				return (((unsigned char)str1[i]) - ((unsigned char)str2[i]));
			i++;
		}
	}
	return (0);
}
