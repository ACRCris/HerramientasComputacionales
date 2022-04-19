CXX=g++
CXXFLAGS=-std=c++17 -g
SANITFLAGS=-fsanitize=address -fsanitize=leak -fsanitize=undefined
VALGRINDFLAGS=--tool=memcheck --track-origins=yes --leak-check=full

all : fixing.cpp
	$(CXX) $(CXXFLAGS) fixing.cpp
sanitizers:fixing.cpp
	$(CXX) $(CXXFLAGS) $(SANITFLAGS) fixing.cpp
	./a.out
debug:fixing.cpp
	$(CXX) $(CXXFLAGS) fixing.cpp
	gdb ./a.out
valgrid:fixing.cpp
	$(CXX) $(CXXFLAGS) $(VALGRINDFLAGS) fixing.cpp
	./a.out

clean:
	rm -rf *.x a.out *.x.*
