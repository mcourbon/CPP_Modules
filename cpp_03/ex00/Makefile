NAME		=	ClapTrap

SRCS		=	main.cpp ClapTrap.cpp ClapTrap.hpp
OBJS		=	$(SRCS:.cpp=.o)
INCLUDES	=	ClapTrap.hpp
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o:		%.cpp $(INCLUDES)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re