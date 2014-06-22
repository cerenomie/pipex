/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:24:29 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:59:44 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	buffer;
	size_t	start;

	start = size;
	lensrc = ft_strlen(src);
	buffer = ft_strlen(dst) + lensrc;
	while (*dst != '\0' && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (lensrc + start);
	while (*src != '\0' && size > 1)
	{
		*(dst)++ = (char)(*(src)++);
		size--;
	}
	*dst = '\0';
	return (buffer);
}
