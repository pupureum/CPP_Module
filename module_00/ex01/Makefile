# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plee <plee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:56:51 by plee              #+#    #+#              #
#    Updated: 2021/12/02 15:26:54 by plee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := PhoneBook

CC := clang++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := PhoneBook.cpp\
		Contact.cpp

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