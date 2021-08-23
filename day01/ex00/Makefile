NAME		=	BraiiiiiiinnnzzzZ

INCLUDE		=	Zombie.hpp

SRC			=	main.cpp \
				Zombie.cpp newZombie.cpp randomChump.cpp

OBJ_NAME	= $(SRC:.cpp=.o)

G++FLAGS	= clang++ -Wall -Wextra -Werror

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