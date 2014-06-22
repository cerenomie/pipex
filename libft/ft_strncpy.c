/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:14:30 by mdelauna          #+#    #+#             */
/*   Updated: 2013/12/08 11:39:59 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n && s2[counter] != '\0')
	{
		*(s1 + counter) = (char)(*(s2 + counter));
		counter++;
	}
	while (counter < n)
	{
		*(s1 + counter) = '\0';
		counter++;
	}
	return (s1);
}
