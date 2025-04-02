#Compilador
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

#Directórios
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

#Arquivos
EXEC = gradebook
OBJ_FILES = $(OBJ_DIR)/GradeBook.o $(OBJ_DIR)/Main.o

#Regra padrão
all:$(EXEC)

#Compilação do executável
$(EXEC): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

#Compilação dos arquivos .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

#Criar diretório obj se não existir
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


#Limpeza dos arquivos gerados
clean:
	rm -rf $(OBJ_DIR)

#Limpeza total
fclean: clean
	rm -f (EXEC)

#Recompilação
re: fclean all