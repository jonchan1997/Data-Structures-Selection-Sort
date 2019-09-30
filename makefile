a.out: Driver.o Selection_Sort.o Sort.o
	g++ Sort.o Selection_Sort.o Driver.o
Driver.o: Driver.cpp
	g++ -c Driver.cpp
Insertion_Sort.o: Selection_Sort.cpp Selection_Sort.h Sort.h
	g++ -c Selection_Sort.cpp
Sort.o: Sort.cpp Sort.h
	g++ -c Sort.cpp
run: a.out
	./a.out