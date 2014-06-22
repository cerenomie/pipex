/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:28:19 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 09:01:21 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	nb;

	if (s1 && s2)
	{
		nb = 0;
		while ((s1[nb] != '\0' || s2[nb] != '\0') && nb < n)
		{
			if (s2[nb] - s1[nb] != 0)
			{
				return (s1[nb] - s2[nb]);
			}
			nb++;
		}
	}
	return (0);
}
