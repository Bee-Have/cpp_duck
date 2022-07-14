NAME = Harl

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = objs

INC = -IHarl.hpp

SRC = main.cpp \
	Harl.cpp

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

re: all fclean

.PHONY: re fclean clean all