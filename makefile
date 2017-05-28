ListMaker: main.o Executive.o LinkedListTester.o
	g++ -std=c++11 -g -Wall main.o Executive.o LinkedListTester.o -o ListMaker
main.o: main.cpp Node.h LinkedList.h LinkedListTester.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp
Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp
LinkedListTester.o: LinkedListTester.h LinkedListTester.cpp
	g++ -std=c++11 -g -Wall -c LinkedListTester.cpp
clean:
	rm *.o ListMaker
