NAME = megaphone

COMP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $< -o $@

%.o : %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all 