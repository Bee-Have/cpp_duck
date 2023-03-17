NAME = PmergeMe

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

DEBUG = 
ifdef DEBUG
CFLAGS += -fsanitize=address -g3
endif

OBJS_DIR = objs
SRCS_DIR = $(shell find srcs -type d)

vpath %.cpp $(foreach dir, $(SRCS_DIR), $(dir):)

SRCS = main.cpp multiset_handling.cpp priority_queue_handling.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJS_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re