NAME = DiamondTrap

COMP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

SRC = FragTrap.cpp main.cpp ClapTrap.cpp ScavTrap.cpp DiamondTrap.cpp
HEADER = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp DiamondTrap.hpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADER)
	$(COMP) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all