SHELL:=/bin/bash

all: vector_main.x

test: vector_test.x
	./$<

%.x: %.o vector_main.o
	source $$HOME/repos/spack/share/spack/setup-env.sh; \
	spack load catch2; \
	g++ $$(pkg-config --cflags catch2) $^ -o $@

%.o: %.cpp
	source $$HOME/repos/spack/share/spack/setup-env.sh; \
	spack load catch2; \
	g++ $$(pkg-config --cflags catch2) -c $<

clean:
	rm -f *.o *.x
