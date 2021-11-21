main:*.o
	g++ -o main *.o 

*.o: *.cpp
	g++ -c -g *.cpp

run:
	@./main

clean:
	rm *.o main