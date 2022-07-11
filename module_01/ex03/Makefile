NAME = violence

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = -IWeapon.hpp -IHumanA.hpp -IHumanB.hpp

OBJ_DIR = objs

SRC = main.cpp \
	Weapon.cpp \
	HumanA.cpp HumanB.cpp

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

.PHONY: all re clean fclean