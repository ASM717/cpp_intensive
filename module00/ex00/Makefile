NAME		=	megaphone

SRC			=	megaphone.cpp

OBJ_NAME	= $(SRC:.cpp=.o)

G++FLAGS	= clang++ -Wall -Wextra -Werror

.c.o:
			$(G++FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ_NAME)
			$(G++FLAGS) -o $(NAME) $(OBJ_NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ_NAME)

fclean:		clean
			rm -f ${NAME}

test:		$(NAME)
			./$(NAME) "shhhhh... I think the students are asleep..."
			./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
			./$(NAME)

re:			fclean all
