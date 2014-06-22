/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:04:10 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/22 10:25:02 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*n;
	size_t	i;

	i = 0;
	if ((n = (char *)malloc(sizeof(char) * (size + 1))))
	{
		while (i <= size)
		{
			n[i] = '\0';
			i++;
		}
	}
	return (n);
}
