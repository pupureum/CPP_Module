# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 15:23:03 by plee              #+#    #+#              #
#    Updated: 2021/12/03 18:48:35 by plee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Weapon

CC := clang++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp

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