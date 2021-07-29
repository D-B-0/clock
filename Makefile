CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= $(wildcard srcs/*.c)
HEADERS	= $(wildcard includes/*.h)

NAME	= clock

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@echo -e '\033[0;32mBuilding $(NAME)...\033[0m'
	@$(CC) $(CFLAGS) $(HEADERS) $(SRCS) -o $(NAME)

clear:
	@echo -e '\033[0;31mClearing $(NAME)...\033[0m'
	@rm -f $(NAME)

.PHONY: all clear
