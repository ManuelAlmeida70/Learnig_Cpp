#Compilador
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

SRCS = GradeBook.cpp

OBJ = $(SRCS:.cpp=.o)

#Exec
EXEC = GradeBook

#Regra padrão
all: $(EXEC)
	

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $^  Main.cpp -o $(EXEC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

#Run app
run:
	./$(EXEC)

.PHONY: all clean fclean re run
