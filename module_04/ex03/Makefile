# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 22:40:31 by plee              #+#    #+#              #
#    Updated: 2022/01/13 05:41:35 by plee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	interface

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

SRCS	=	AMateria.cpp\
			Character.cpp\
			Cure.cpp\
			Ice.cpp\
			MateriaSource.cpp\
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

.cpp.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $^

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re