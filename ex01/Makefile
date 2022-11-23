NAME = Serialize

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

DEBUG =
ifdef DEBUG
CLFAGS += -g3 -fsanitize=address
endif

OBJ_DIR = objs
SRC_DIR = $(shell find src type d)

INC = -Isrc/Data.hpp

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir))

SRC = main.cpp serialize.cpp deserialize.cpp

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

.PHONY: flcean clean re all