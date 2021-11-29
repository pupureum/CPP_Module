# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plee <plee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 21:39:37 by plee              #+#    #+#              #
#    Updated: 2021/11/25 21:42:04 by plee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := clang++
CFLAGS := -Wall -Werror -Wextra

SRCS := megaphone.cpp
OBJS := ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: clean
			rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re