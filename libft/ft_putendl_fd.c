/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:30:40 by mdelauna          #+#    #+#             */
/*   Updated: 2013/11/22 09:15:21 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd((*s), fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}
