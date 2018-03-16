# Definitions for constants
CC=g++
CFLAGS = -I. 

# This will create your final output using .o compiled files
make: main.o prof.o
	$(CC) $(CFLAGS) -o main main.o prof.o

main.o: main.cpp prof.h
	$(CC) $(CFLAGS) -c main.cpp -o main.o

prof.o: prof.cpp prof.h
	$(CC) $(CFLAGS) -c prof.cpp -o prof.o
	
# This will clean or remove compiled files so you can start fresh
clean:
	rm -f *.o *.exe getStuff/*.o

