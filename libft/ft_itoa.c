/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:29:15 by mdelauna          #+#    #+#             */
/*   Updated: 2014/04/22 16:27:50 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

int			size_count(int n)
{
	int		size;

	size = 0;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char		*itoa_real(int n, char *str, int size)
{
	size = (n > 0 ? size - 1 : size);
	str[size + 1] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
		while (n > 0 && size > 0)
		{
			str[size] = n % 10 + '0';
			n = n / 10;
			size--;
		}
	}
	else
	{
		while (n > 0 || size > 0)
		{
			str[size] = n % 10 + '0';
			n = n / 10;
			size--;
		}
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = size_count(n);
	if ((str = (char *)malloc(size + 2)) || n == 0)
	{
		if (n == 0)
		{
			str[0] = '0';
			str[1] = '\0';
			return (str);
		}
		if (n == -2147483648)
		{
			str = ft_strcpy(str, "-2147483648");
			return (str);
		}
		str = itoa_real(n, str, size);
		return (str);
	}
	return (NULL);
}
