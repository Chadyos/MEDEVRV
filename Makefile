# Nom de l'exécutable
EXEC := batailleNavale

# Dossier source
SRCDIR := Battleship

# Fichiers source
SOURCES := $(wildcard $(SRCDIR)/*.cpp)

# Fichiers objet générés après la compilation
OBJECTS := $(SOURCES:.cpp=.o)

# Compiler avec g++
CC := g++

# Flags de compilation
CFLAGS := -Wall -g

# Règle par défaut
all: $(EXEC)

# Règle de l'édition de liens
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

# Règle de compilation
$(SRCDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer le projet
clean:
	rm -f $(SRCDIR)/*.o $(EXEC)

# Règle pour exécuter le programme
run: all
	./$(EXEC)
