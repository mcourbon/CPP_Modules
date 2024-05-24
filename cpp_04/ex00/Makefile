NAME		=	Animal

SRCS		=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS		=	$(SRCS:.cpp=.o)
INCLUDES	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
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