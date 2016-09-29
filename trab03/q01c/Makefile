system: clean libprime.o main.o
	gcc main.o libprime.o  -lm -o run
	rm -rf *.o
	./run
main.o: main.c
	gcc -c main.c -o main.o -lm
libprime.o: libprime.c
	gcc -c libprime.c -o libprime.o -lm
clean:
	rm -rf *.o
