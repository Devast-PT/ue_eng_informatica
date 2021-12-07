

all: fichastrings fichastrings.o
	./fichastrings

fichastrings: fichastrings.o
	gcc -o fichastrings fichastrings.o
    
ficha.o:
	gcc -c fichastrings.c -o fichastrings.o

clean:
	rm ./bin/\*.o
