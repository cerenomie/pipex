/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:38:09 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/24 11:38:50 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if (c)
	{
		if (c > 64 && c < 91)
		{
			c = c + 32;
		}
		return (c);
	}
	return (0);
}