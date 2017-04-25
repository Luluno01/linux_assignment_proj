main:main.o ops.o
	gcc main.o ops.o -o main
main.o:main.c
	gcc -c main.c
ops.o:ops.c
	gcc -c ops.c

.PHONY: clean
clean:
	rm -f main *.o
