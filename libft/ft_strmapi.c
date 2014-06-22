/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:52:45 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/24 16:18:36 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*dest;
	unsigned int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0' && f != NULL)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	if (i != 0)
		return (dest);
	else
		return (ft_strdup(s));
}
