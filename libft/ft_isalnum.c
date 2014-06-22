/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:28:32 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/24 11:40:43 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (c)
	{
		if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
