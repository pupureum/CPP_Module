# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 15:23:03 by plee              #+#    #+#              #
#    Updated: 2022/01/12 03:35:52 by plee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := diamondtrap

CC := clang++
CFLAGS := -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

SRCS := main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp

OBJS := ${SRCS:.cpp=.o}

.cpp.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean:
			rm -f $(OBJS)

fclean: clean
			rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re