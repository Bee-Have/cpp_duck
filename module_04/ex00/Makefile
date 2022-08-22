NAME = Animals

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = $(shell find srcs -type d)
INC_DIR = $(shell find srcs -type d)
OBJ_DIR = objs

# INC = -IAnimal.hpp -IDog.hpp -ICat.hpp -IWrongAnimal.hpp -IWrongDog.hpp -IWrongCat.hpp

vpath %.hpp $(foreach dir, $(SRC_DIR), $(dir):)
INC = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongDog.hpp WrongCat.hpp

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)
# vpath %.hpp $(foreach dir, $(INC_DIR), $(dir):)
# INC = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongDog.hpp WrongCat.hpp

# INC_DIR = $(addprefix $(INC))

INC = $(addprefix -I$(foreach dir, $(SRC_DIR), $(dir)), $(SRC:.cpp=.hpp))

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