NAME= weapon
COMP= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HEADER= HumanA.hpp HumanB.hpp Weapon.hpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADER)
	$(COMP) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all