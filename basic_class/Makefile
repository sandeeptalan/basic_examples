CC = g++
DEBUG = -g
CFLAGS = -std=c++11 -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
HEADERS = basic_class.h

SRC = basic_class_main.cpp basic_class.cpp

OBJS = basic_class_main.o basic_class.o

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o tmp

basic_class_main.o: basic_class_main.cpp
	$(CC) $(CFLAGS) basic_class_main.cpp

basic_class.o: basic_class.cpp
	$(CC) $(CFLAGS) basic_class.cpp

clean:
	rm *.o tmp
