/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:43:15 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:56:32 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!b || !len)
		return (b);
	ptr = (char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (b);
}
