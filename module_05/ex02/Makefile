NAME = Bureaucrat

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = $(shell find src -type d)
OBJ_DIR = objs

IFLAGS = $(foreach dir, $(SRC_DIR), -I$(dir))

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

SRC = main.cpp \
	Bureaucrat.cpp Form.cpp \
	ShrubberyCreationForm.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re