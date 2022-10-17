CC = g++
CFLAGS =
include ../../debugflags

EXE = make
SOURCES = main.cpp

INCLUDES_DIR = ../../inc
CFLAGS += -I$(INCLUDES_DIR)/

include $(INCLUDES_DIR)/rwfile/Makefile

OBJECTS = $(SOURCES:.cpp=.o)

#-------------------------------------------------------------------------------

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
 
.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(EXE) $(OBJECTS)

