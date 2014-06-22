/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:29:09 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:57:00 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*ptr;
	const char	*ptr2;
	size_t		i;

	if (!s1 || !s2 || !n)
		return (s1);
	ptr = s1;
	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		ptr[i] = (char)ptr2[i];
		if ((char)ptr2[i] == (char)c)
			return (ptr + i + 1);
		i++;
	}
	return (NULL);
}
