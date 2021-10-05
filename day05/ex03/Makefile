NAME	= beats_coffee_making

SRCS	= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

all: $(NAME)
$(NAME): $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
$(OBJS): %.o: %.cpp
			$(CC) $(CFLAGS) -o $@ -c $<
clean:
			$(RM) $(OBJS)
fclean: clean
			$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
