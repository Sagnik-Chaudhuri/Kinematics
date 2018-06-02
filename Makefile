output: main.o vector_maths.o
	g++ main.o vector_maths.o -o output
main.o: main.cpp
	g++ -c main.cpp
vector_maths.o: vector_maths.cpp vector_maths.h
	g++ -c vector_maths.cpp
clean:
	rm *.o
