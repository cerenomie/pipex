/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:35:34 by mdelauna          #+#    #+#             */
/*   Updated: 2013/12/08 11:39:29 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	negatif;

	negatif = 0;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		negatif = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57 && *str != '\0')
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	if (negatif == 1)
		i = i * (-1);
	return (i);
}
