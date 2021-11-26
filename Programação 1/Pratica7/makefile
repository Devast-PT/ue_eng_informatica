
cc = gcc
.PHONY = all clean

all: p7


p7: p7.o
	${cc} -o p7 p7.o
	
	
p7.o: p7.c
	${cc} -c p7.c -o p7.o


clean:
	rm *.o