CXX      = clang++
CXXFLAGS = -gdwarf-4 -std=c++17 -Wall -Wextra -pedantic
LIBS     = -lranduint32
TARGETS  = myrand

all: $(TARGETS)

myrand: myrand.o
	$(CXX) -o $@ $^ $(LIBS)

clean:
	rm -f *.o $(TARGETS)

myrand.o: myrand.cpp
