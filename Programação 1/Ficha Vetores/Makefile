

all: ficha ficha.o
	./ficha

ficha: ficha.o
	gcc -o ficha ./bin/ficha.o
    
ficha.o:
	gcc -c ficha.c -o ./bin/ficha.o

clean:
	rm ./bin/\*.o
