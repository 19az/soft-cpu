CC = g++
CFLAGS =
include ../../debugflags

EXE = make
SOURCES = main.cpp

INCLUDES_DIR = ../../inc
include $(INCLUDES_DIR)/rwfile/Makefile

OBJECTS = $(SOURCES:.cpp=.o)

SUBDIRS =

#-------------------------------------------------------------------------------

.PHONY: all clean subdirs_make subdirs_clean $(SUBDIRS)

all: subdirs_make $(EXE)

subdirs_make: CMD = all
subdirs_make: $(SUBDIRS)

subdirs_clean: CMD = clean
subdirs_clean: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) ${CMD} -C $@

$(EXE): $(OBJECTS)
	$(CC) -I$(INCLUDES_DIR)/ $(CFLAGS) -o $@ $^
 
.cpp.o:
	$(CC) -I$(INCLUDES_DIR)/ $(CFLAGS) -c $< -o $@

clean: subdirs_clean
	rm -rf $(EXE) $(OBJECTS)

