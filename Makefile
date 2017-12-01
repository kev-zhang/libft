# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pzhang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 10:32:00 by pzhang            #+#    #+#              #
#    Updated: 2017/11/30 21:21:17 by pzhang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
INCLUDE		= libft.h
SOURCE		= $(wildcard ft*.c)
OFILES		= $(SOURCE:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -Werror -Wall -Wextra -c $(SOURCE)
	@ar rc $(NAME) $(OFILES)

clean:
	@/bin/rm -f $(OFILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
