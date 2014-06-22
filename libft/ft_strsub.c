/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:36:10 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/24 16:20:14 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*dest;

	if (!s)
		return (NULL);
	i = 0;
	if ((dest = ((char *)malloc(sizeof(char) * (len + 1)))))
	{
		while (i < start)
		{
			i++;
		}
		j = 0;
		while (i < (start + len))
		{
			dest[j] = s[i];
			j++;
			i++;
		}
		dest[j] = '\0';
		return (dest);
	}
	return (NULL);
}
