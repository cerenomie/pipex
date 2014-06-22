#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelauna <mdelauna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/06 12:14:18 by mdelauna          #+#    #+#              #
#    Updated: 2014/05/06 14:50:54 by mdelauna         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = pipex

SRCS = ft_pipex.c pipex.c search_path.c utils.c

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g

LIB = libft/

LIB_A = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIB)
	gcc -o $(NAME) $(CFLAGS) $(OBJ) $(LIB_A)

clean:
	$(MAKE) -C $(LIB) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIB) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: $(LIB) clean fclean re all