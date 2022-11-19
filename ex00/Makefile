NAME = Cast

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = $(shell find src -type d)
OBJ_DIR = objs

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

SRC = main.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean re all