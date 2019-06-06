CC=gcc
CFLAGS=-c -Wall
LIBS=-lpthread

LDFLAGS=-Wl

SOURCES=test_pthread.c

OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=test_pthread

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBS)

*.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE) $(EXECUTABLE).map


