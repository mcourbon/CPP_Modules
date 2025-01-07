NAME		=	ex02

SRCS		=	main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS		=	$(SRCS:.cpp=.o)
INCLUDES	=	Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
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