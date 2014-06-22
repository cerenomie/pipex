/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:49:48 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:59:28 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		counter;
	int		counter2;

	if (!s1 || !n)
		return (s1);
	counter = 0;
	counter2 = 0;
	while (s1[counter] != '\0')
	{
		counter++;
	}
	while (s2[counter2] != '\0' && n > 0)
	{
		s1[counter] = (char)s2[counter2];
		counter++;
		counter2++;
		n--;
	}
	s1[counter] = '\0';
	return (s1);
}
