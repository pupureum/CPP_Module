# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plee <plee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 15:23:03 by plee              #+#    #+#              #
#    Updated: 2021/12/17 20:06:01 by plee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := FragTrap

CC := clang++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp

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