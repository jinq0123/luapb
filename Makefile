.PHONY: all  clean 
CC=gcc
CXX=g++

CFLAGS = -g -Wall
CXXFLAGS =-g -Wall 

TARGET=out
all:
	$(CXX) $(CXXFLAGS) -c -I./include src/*.cc
	$(CXX) -o $(TARGET) *.o -lprotobuf  -llua -ldl -lluabind

clean:
	rm -f out
	rm -f *.o
