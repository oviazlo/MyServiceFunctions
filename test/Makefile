CXX_FLAGS := -g -O2 -fPIC
LIB_PATH := $(PWD)/../

all: test

test: test.cxx
	g++ $(CXX_FLAGS) `root-config --cflags --libs` -L${LIB_PATH} -lMyServiceFunctions -o $@ $<
clean:
	rm test

