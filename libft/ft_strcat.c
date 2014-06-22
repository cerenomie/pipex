/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:02:04 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:59:14 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int	counter;
	int	counter2;

	if (!s2)
		return (s1);
	counter = 0;
	counter2 = 0;
	while (s1[counter] != '\0')
	{
		counter++;
	}
	while (s2[counter2] != '\0')
	{
		s1[counter] = (char)s2[counter2];
		counter++;
		counter2++;
	}
	s1[counter] = '\0';
	return (s1);
}
