/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/11 10:42:47 by mdelauna          #+#    #+#             */
/*   Updated: 2014/03/11 10:43:56 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_str_isprint(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
