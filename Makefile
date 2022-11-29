PROG = test_apue_api

objects = test_apue_api.o api_file_io.o

CC = gcc
CFLAGS = -g

all: $(PROG)

# LIBS = 

test_apue_api: $(objects)
	$(CC) $(CFLAGS)  -o $(PROG)  $(objects)

api_file_io.o: test_apue_api.h

# api_files_directories.o: test_apue_api.h

clean:
	rm -f *.o *.exe $(PROG)