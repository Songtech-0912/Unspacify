CC = g++
TARGET = unspacify
C_FLAGS = -g -Wall
SOURCE_FILES = unspacify.cpp

build : $(SOURCE_FILES)
	$(CC) $(SOURCE_FILES) $(CFLAGS) -o $(TARGET)
	@echo Compiling complete!

.PHONY : clean cleanobj

clean : cleanobj
	rm -f $(TARGET)
	@echo All executable binaries removed
