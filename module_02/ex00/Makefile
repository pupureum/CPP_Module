# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 15:23:03 by plee              #+#    #+#              #
#    Updated: 2021/12/05 02:35:40 by plee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

CC := clang++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := main.cpp\
		Fixed.cpp\

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