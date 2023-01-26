# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 13:04:27 by jcarlen           #+#    #+#              #
#    Updated: 2023/01/26 13:05:47 by jcarlen          ###   ########.ch        #
#                                                                              #
# **************************************************************************** #

NAME = out

SRCS = main.cpp ClapTrap.cpp

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