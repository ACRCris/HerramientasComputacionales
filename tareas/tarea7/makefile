CXX=g++
CXXFLAGS= -g
SANITFLAGS=-fsanitize=address -fsanitize=leak -fsanitize=undefined
VALGRINDFLAGS=--tool=memcheck --track-origins=yes  --leak-check=full

all : fixing.cpp
	$(CXX) $(CXXFLAGS) fixing.cpp
sanitizers:fixing.cpp
	$(CXX) $(CXXFLAGS) $(SANITFLAGS) fixing.cpp
	./a.out
debug:fixing.cpp
	$(CXX) $(CXXFLAGS) fixing.cpp
	gdb --tui ./a.out
valgrind:fixing.cpp
	$(CXX) $(CXXFLAGS) fixing.cpp
	valgrind $(VALGRINDFLAGS) ./a.out

clean:
	rm -rf *.x a.out *.x.*
