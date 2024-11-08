all:	main

BrazoRobotico.o:	BrazoRobotico.cpp	BrazoRobotico.h
	g++	-c	BrazoRobotico.cpp	


main.o:	main.cpp	BrazoRobotico.h
	g++	-c	main.cpp	

main:	main.o	BrazoRobotico.o
	g++	-o	BrazoEjecutable		main.o	BrazoRobotico.o

test:
	./BrazoEjecutable
clean:
	rm	-f	*.o	main	
