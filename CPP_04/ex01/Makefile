# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 14:03:30 by jcarlen           #+#    #+#              #
#    Updated: 2023/01/24 13:56:55 by jeancarlen       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = out

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS = ${SRCS:.cpp=.o}

CXX  = c++

RM  = rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

run: $(NAME)
	@./out
	@make fclean

.PHONY:	all clean fclean re 