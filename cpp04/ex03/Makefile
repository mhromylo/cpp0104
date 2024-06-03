NAME = fight

SRC = main.cpp AMateira.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
			rm -f *.o
fclean: clean
			rm -f $(NAME)
re: fclean all