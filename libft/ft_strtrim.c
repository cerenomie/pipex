/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:36:29 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/24 15:19:16 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*revtrim(char const *s, char *dst, int i, int j)
{
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		dst[j] = '\0';
		i--;
		j--;
	}
	dst[ft_strlen(s) + 1] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) && s)
	{
		if (s[0] == '\0')
			dst[0] = '\0';
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[i] != '\0')
		{
			dst[j] = s[i];
			j++;
			i++;
		}
		i--;
		j--;
		return (revtrim(s, dst, i, j));
	}
	return (NULL);
}
