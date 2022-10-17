CC = g++
CFLAGS =
include ../../debugflags

EXE = asm
SOURCES = main.cpp

INCLUDES_DIR = ../../inc

OBJECTS = $(SOURCES:.cpp=.o)

#-------------------------------------------------------------------------------

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) -I$(INCLUDES_DIR)/ $(CFLAGS) -o $@ $^
 
.cpp.o:
	$(CC) -I$(INCLUDES_DIR)/ $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(EXE) $(OBJECTS)

