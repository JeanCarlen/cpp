NAME = Zombie

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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