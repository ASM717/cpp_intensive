NAME		= diamond

INCLUDE		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

SRC			= main.cpp ClapTrap.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ_NAME	= $(SRC:.cpp=.o)

G++FLAGS	= clang++ -Wall -Wextra -Werror -Wshadow -Wno-shadow

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
