NAME = Animals

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = $(shell find srcs -type d)
OBJ_DIR = objs

INC = -I$(SRC_DIR)Animal.hpp -I$(SRC_DIR)Dog.hpp -I$(SRC_DIR)Cat.hpp -I$(SRC_DIR)WrongAnimal.hpp -I$(SRC_DIR)WrongDog.hpp -I$(SRC_DIR)WrongCat.hpp

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

SRC = main.cpp \
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

.PHONY: all clean fclean re