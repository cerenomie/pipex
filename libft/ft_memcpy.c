/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:02:28 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:56:45 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*ptr;
	const char	*ptr2;
	size_t		i;

	if (!s1 || !s2 || !n)
		return (s1);
	i = 0;
	ptr = s1;
	ptr2 = s2;
	while (n-- != 0)
	{
		ptr[i] = (char)ptr2[i];
		i++;
	}
	return (s1);
}
