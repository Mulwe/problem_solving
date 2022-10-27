NAME = morse
CC = g++
CFLAGS= -Wextra -Werror -Wall

SRC = morse.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(NAME)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

.PHONY: clean fclean all 