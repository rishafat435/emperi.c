CC      = gcc
CFLAGS  = -Wall -Wextra -g -D_DEFAULT_SOURCE -D_XOPEN_SOURCE=600
LDFLAGS = -lnotcurses -lnotcurses-core
TARGET  = emperi
SRCS    = src/main.c
OBJS    = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)