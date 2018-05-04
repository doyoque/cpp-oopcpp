OBJS = oopcpp.cpp

CC = g++

COMPILER_FLAGS = -w

OBJ_NAME = generalpurposeonly

all: $(OBJS)
	g++ $(OBJS) -w -o $(OBJ_NAME)
