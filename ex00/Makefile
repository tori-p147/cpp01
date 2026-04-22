NAME = zombie

SRC_DIR = src
INC_DIR = includes
BLD_DIR = obj

CC        = g++
CFLAGS    = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
INCLUDES  = -I$(INC_DIR)

SRC_FILES = Zombie.cpp \
		newZombie.cpp \
		randomChamp.cpp \
		main.cpp \
		
SOURCES = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJS = $(patsubst $(SRC_DIR)/%.c, $(BLD_DIR)/%.o,$(SOURCES))

all: $(NAME)

$(BLD_DIR)/%.o: $(SRC_DIR)/%.c | $(BLD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BLD_DIR):
	mkdir -p $(BLD_DIR)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	@$(RM) $(BLD_DIR)

fclean:
	@$(RM) $(BLD_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re
