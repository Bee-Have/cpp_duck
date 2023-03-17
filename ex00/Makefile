NAME = btc

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

DEBUG =
ifdef DEBUG
CFLAGS += -fsanitize=address -g3
endif

SRCS_DIR = $(shell find srcs -type d)
OBJS_DIR = objs
IFALGS = $(foreach dir, $(SRCS_DIR), -I$(dir))

vpath %.cpp $(foreach dir, $(SRCS_DIR), $(dir):)

SRCS = main.cpp database.cpp input_handling.cpp Date.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJS_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(IFALGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re