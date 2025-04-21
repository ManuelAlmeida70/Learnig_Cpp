#Compilador
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

#Exec
exec = GradeBook

#Src
obj = GradeBook.o

all: $(exec)

$(exec): $(obj)
	$(CC) $(CFLAGS) Main.cpp $^ -o $@ 

%.o: %.cpp | $(obj)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -f $(exec)

re: fclean all

run:
	./$(exec)

.PHONY: re clean fclean run
	