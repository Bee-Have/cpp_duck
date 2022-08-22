NAME = Brains

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = $(shell find srcs -type d)
OBJ_DIR = objs

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

INC = -IAnimal.hpp -IBrain.hpp -IDog.hpp -ICat.hpp \
	-IWrongAnimal.hpp -IWrongDog.hpp -IWrongCat.hpp

SRC = main.cpp \
	Brain.cpp \
	Animal.cpp Dog.cpp Cat.cpp \
	WrongAnimal.cpp WrongDog.cpp WrongCat.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONYY: all clean fclean re