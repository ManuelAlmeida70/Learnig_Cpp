# Compilador
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos
EXEC = megaphone
OBJ_FILES = $(OBJ_DIR)/megaphone.o

# Diretórios
OBJ_DIR = obj

# Regra padrão
all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	$(CC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Criar directório para arquivos .o
$(OBJ_DIR):
	@mkdir $(OBJ_DIR)


# Limpeza dos arquivos gerados
clean:
	rm -rf $(OBJ_DIR)

# Limpeza total
fclean: clean
	rm -f $(EXEC)

# Recompilação
re: fclean all

.PHONY: all clean fclean re