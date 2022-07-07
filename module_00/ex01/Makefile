NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = objs

INC = -Iphonebook.hpp -Icontact.hpp

SRC = main.cpp \
	phonebook.cpp \
	contact.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

.PHONY: fclean clean re all