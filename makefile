CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic
LDLIBS = -lm

TARGET = artemis
SOURCES = main.c artemis.c validaciones.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SOURCES) artemis.h validaciones.h
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET) $(LDLIBS)

clean:
	rm -f $(TARGET)
