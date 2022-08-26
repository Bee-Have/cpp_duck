NAME = Abstract

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = $(shell find srcs type -d)
OBJ_DIR = objs

IFLAGS = $(foreach dir, $(SRC_DIR), -I$(dir))

vpath: %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

SRC = main.cpp \
	Brain.cpp \
	Animal.cpp Cat.cpp Dog.cpp \
	WrongAnimal.cpp WrongCat.cpp WrongDog.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fcllean re