main:main.o ops.o
	gcc main.o ops.o -o main
main.o:
	gcc -c main.c
ops.o:
	gcc -c ops.c

clean:
	rm -f main *.o
