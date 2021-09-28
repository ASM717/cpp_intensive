NAME		= interface_&_recap

INCLUDE		= AMateria.hpp ICaracter.hpp Cure.hpp Ice.hpp IMateriaSource.hpp

SRC			= main.cpp AMateria.cpp Cure.cpp Ice.cpp

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
