NAME = Zombie

COMP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
HEADER = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $< -o $@

%.o : %.cpp $(HEADER)
	$(COMP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all 	