/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:10:57 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 08:58:30 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, const char *s2)
{
	int		counter;

	counter = 0;
	while (s2[counter] != '\0')
	{
		s1[counter] = (char)s2[counter];
		counter++;
	}
	s1[counter] = '\0';
	return (s1);
}
