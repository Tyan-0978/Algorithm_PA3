CC = g++
CFLAG = -c
OPTFLAGS = -O2

all: bin/mps

bin/cb: main.o maximum_planar_subset.o
        $(CC) $(OPTFLAGS) main.o cycle_breaking.o -o $@

main.o: src/main.cpp
        $(CC) $(CFLAG) $< -o $@

cycle_breaking.o: src/cycle_breaking.cpp src/cycle_breaking.h
        $(CC) $(CFLAG) $(OPTFLAGS) $< -o $@

clean:
        rm -rf *.o bin/*
