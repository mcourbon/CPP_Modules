NAME		=	UnnecessaryViolence

SRCS		=	main.cpp Weapon.cpp HumanA.cpp 	HumanB.cpp
OBJS		=	$(SRCS:.cpp=.o)
INCLUDES	=	Weapon.hpp HumanA.hpp HumanB.cpp
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