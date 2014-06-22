/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:01:34 by mdelauna          #+#    #+#             */
/*   Updated: 2013/12/08 11:44:01 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(const char *s)
{
	size_t	nbrchar;

	if (s)
	{
		nbrchar = 0;
		while (s[nbrchar])
		{
			nbrchar++;
		}
		return (nbrchar);
	}
	return (0);
}
