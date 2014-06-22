/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:25:51 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/26 09:01:08 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int	counter;

	if (s1 && s2)
	{
		counter = 0;
		while (s1[counter] != '\0' || s2[counter] != '\0')
		{
			if (s2[counter] - s1[counter] != 0)
			{
				return (s1[counter] - s2[counter]);
			}
			counter++;
		}
		return (0);
	}
	return (0);
}
