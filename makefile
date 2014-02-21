CC=g++

INCLUDES=/shares/public/tp/tp-multitache

CPFLAGS=-Wall -Wno-write-strings -std=c++11 -I$(INCLUDES)
EXTLIB=/shares/public/tp/tp-multitache
LDFLAGS=-L$(EXTLIB) -lncurses -ltcl 

CPP_FILES= $(wildcard src/*.cpp)
OBJ_FILES= $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))

EXE=bin/Parking

$(EXE): $(OBJ_FILES) $(EXTLIB)/libtp.a
	$(CC) $(LDFLAGS) -o $@ $^
	rm $(OBJ_FILES)

obj/%.o: src/%.cpp
	$(CC) $(CPFLAGS) -c -o $@ $<

clear:
	rm $(OBJ_FILES) $(EXE)
