system: clean libprimo.o main.o
	gcc main.o libprimo.o  -lm -o run
	rm -rf *.o
	./run
main.o: main.c
	gcc -c main.c -o main.o -lm
libprime.o: libprimo.c
	gcc -c libprimo.c -o libprimo.o -lm
clean:
	rm -rf *.o
