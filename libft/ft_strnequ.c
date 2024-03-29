/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:30:24 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/24 16:29:00 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (1);
	while ((*s1 != '\0' || *s2 != '\0') && n != 0)
	{
		if (*s1 - *s2 != 0)
			return (0);
		else
		{
			n--;
			s1++;
			s2++;
		}
	}
	return (1);
}
