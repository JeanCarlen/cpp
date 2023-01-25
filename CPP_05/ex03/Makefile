# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 14:03:30 by jcarlen           #+#    #+#              #
#    Updated: 2023/01/25 13:48:01 by jcarlen          ###   ########.ch        #
#                                                                              #
# **************************************************************************** #

NAME = out

SRCS =	main.cpp Bureaucrat.cpp Form.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

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
	@cat tree_shrubbery
	@rm tree_shrubbery

.PHONY:	all clean fclean re 