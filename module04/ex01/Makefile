NAME		= deepCopy

INCLUDE		= Animal.hpp Cat.hpp Dog.hpp Brain.hpp

SRC			= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ_NAME	= $(SRC:.cpp=.o)

G++FLAGS	= -std=c++98 clang++ -Wall -Wextra -Werror

.c.o:
			$(G++FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ_NAME) $(INCLUDE)
			$(G++FLAGS) -o $(NAME) $(OBJ_NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ_NAME)

fclean:		clean
			rm -f ${NAME}

re:			fclean all
