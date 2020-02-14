CXX=g++
CFLAGS=-c -Wall
hello: main.o factorial.o hello.o
	$(CXX) main.o factorial.o hello.o -o hello

main.o: main.cpp functions.h
	$(CXX) $(CFLAGS) -c main.cpp

factorial.o: factorial.cpp functions.h
	$(CXX) $(CFLAGS) -c factorial.cpp

hello.o: hello.cpp functions.h
	$(CXX) $(CFLAGS) -c hello.cpp

clean:
	-rm *.o hello