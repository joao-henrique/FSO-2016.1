system: clean thread.o
	gcc thread.o -lm -o thread -pthread
	@echo " "
	@echo " ----------- "
	@echo "Follow instruction"
	@echo "Use in terminal:"
	@echo " $ ./thread number_threads_running (integer between 1 and 10)"
	@echo " "
	@echo " "
	@echo "--- For exit use  Ctrl+C (SIGINT) in terminal  "
	@echo " "
	@echo " "
	@echo "Example"
	@echo " $./thread 7 "
	@echo " "
	@echo " "
	rm -rf *.o
thread.o: main.c
	gcc -c main.c -o thread.o -lm
clean:
	rm -rf *.o
