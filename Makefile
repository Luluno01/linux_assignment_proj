main:main.o ops.o
	gcc $^ -o main
main.o:main.c
	gcc -c $^
ops.o:ops.c
	gcc -c $^

.PHONY: clean
clean:
	rm -f main *.o
