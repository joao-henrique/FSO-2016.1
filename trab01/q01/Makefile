system: clean input.o main.o libcalcs.o
	gcc main.o input.o libcalcs.o -lm -o run
	rm -rf *.o
	./run
main.o: main.c
	gcc -c main.c -o main.o -lm
input.o: input.c
	gcc -c input.c -o input.o -lm
libcalcs.o:
	gcc -c libcalcs.c -o libcalcs.o -lm
clean:
	rm -rf *.o
