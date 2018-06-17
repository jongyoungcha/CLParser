CC = g++
OBJS = main.o CLParser.o CLConfigLoader.o
CPPFLAGS = -g -std='c++1y' -I./
TARGET = main

.SUFFIXES : .cpp .o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)


clean:
	rm -rf $(OBJS) $(TARGET)
