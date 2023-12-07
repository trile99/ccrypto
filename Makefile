CC = clang # Compiler
CFLAGS = -Wall -std=c17 -I/opt/homebrew/Cellar/cunit/2.1-3/include # Compiler flags
LDFLAGS = -framework CoreFoundation -framework CoreServices -L/opt/homebrew/Cellar/cunit/2.1-3/lib -lcunit # Linker flags
SRC = test.c # Source files

all: test

test: $(SRC)
	$(CC) $(CFLAGS) $(LDFLAGS) $(SRC) -o test

clean:
	rm -f test