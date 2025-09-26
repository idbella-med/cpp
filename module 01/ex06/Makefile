NAME=harlFilter
COMP= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
SRC=Harl.cpp main.cpp
HEADER=Harl.hpp
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