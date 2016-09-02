system: clean  main.o core.o  sort.o io.o
	gcc main.o core.o io.o sort.o -lm -o run
	rm -rf *.o
main.o: main.c
	gcc -c main.c -o main.o -lm
core.o: core.c
	gcc -c core.c -o core.o -lm
sort.o: sort.c
	gcc -c sort.c -o sort.o -lm
io.o: io.c
		gcc -c io.c -o io.o -lm
clean:
	rm -rf *.o
