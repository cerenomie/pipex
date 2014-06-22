/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:51:44 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/24 16:16:59 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0' && f != NULL)
	{
		dest[i] = f(s[i]);
		i++;
	}
	dest[i] = '\0';
	if (i != 0)
		return (dest);
	else
		return (ft_strdup(s));
}
