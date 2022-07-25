NAME = Violence

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = -IClapTrap.hpp

OBJ_DIR = objs

SRC = main.cpp \
	ClapTrap.cpp

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

re: clean all

.PHONY: all clean fclean re