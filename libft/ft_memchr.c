/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:07:58 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:57:29 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	if (s && c && n)
	{
		i = 0;
		str = s;
		while (i < n)
		{
			if (str[i] == (char)c)
			{
				return ((char *)(s + i));
			}
			i++;
		}
	}
	return (0);
}
