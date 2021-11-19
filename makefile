main : main.o
	g++ *.o -o main

main.o :
	g++ -c *.cpp

run : main
	./main

clear :
	rm *.o

arc :
	tar -czvf u19264047.tar.gz *.cpp *.h makefile *.png