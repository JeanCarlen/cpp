# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 12:15:43 by jcarlen           #+#    #+#              #
#    Updated: 2023/01/16 12:15:45 by jcarlen          ###   ########.ch        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

CC  = c++

RM  = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re 