/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 16:21:16 by mdelauna          #+#    #+#             */
/*   Updated: 2014/05/07 12:41:35 by mdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <string.h>
# include "libft/libft.h"

void	free_arr(char ***arr);
char	*get_path(char **envp, char **cmd);
int		ft_access(char *path);
char	*search_path(char **paths, char *cmd);
char	**find(char **src, char *to_find);
int		findi(char **src, char *to_find);
char	*ft_strtoupper(char *str);
int		len_arr(char **arr);
char	*ft_strnjoin(char const *s1, char const *s2, size_t len_s2);

#endif
