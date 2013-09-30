CC=gcc
CFLAGS=-c -Wall

# Define the source files
SRC = wh1080_rf.c bcm2835.c bmp085.c parameters.c

# Define the object files by replacing each SRC .c with .o
OBJ = $(SRC:.c=.o)

# Define the final executable name
EXE = wh1080_rf

all: $(EXE)
	 @echo Compilation successful

$(EXE): $(OBJ)
	$(CC) -lm $(OBJ) -o $(EXE)

%.o: %.c %.h
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(OBJ) $(EXE)