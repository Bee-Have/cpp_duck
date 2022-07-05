NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = objs

SRC = megaphone.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

.PHONY: fclean clean re all