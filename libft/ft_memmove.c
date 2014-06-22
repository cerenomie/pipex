/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:53:59 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:57:15 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void			*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*s3;
	char		*ptr;
	const char	*ptr2;
	size_t		i;

	if (!s1 || !s2 || !n)
		return (s1);
	i = 0;
	ptr = s1;
	ptr2 = s2;
	s3 = (char *)malloc(sizeof(n));
	while (i < n)
	{
		s3[i] = (char)ptr2[i];
		i++;
	}
	i = -1;
	while (++i < n)
		ptr[i] = s3[i];
	return (s1);
}
