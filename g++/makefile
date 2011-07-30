SRCS = $(shell find . -name '*.[cS]')
SRCS += $(shell find . -name '*.cpp')
OBJS = $(addsuffix .o,$(basename $(SRCS)))

CC = gcc
CXX = g++ 

BOOSTDIR = -I/Users/wutzi/Downloads/boost_1_47_0/
BOOSTLIBSDIR = -L/Users/wutzi/Downloads/boost_1_47_0/stage/lib/
BOOSTLIBS = -lboost_system -lboost_filesystem -lboost_program_options

ROOTCFLAGS = `root-config --cflags`
ROOTLDFLAGS = `root-config --libs`
ROOTINC = -I/Users/wutzi/root/root/include
ROOTLIBS = -lSpectrum

CFLAGS = -O4 \
	 -fno-builtin \
	 -mtune=core2 \
	-D_REENTRANT \
	 -DRENDER \
	 -pthread \
	-m64	    -fomit-frame-pointer \
	 -ffast-math -ffunction-sections  \
	   -msse4.1  -Wall -march=core2 

root_graph: $(OBJS)
	$(CXX) $(BOOSTLIBSDIR) $(BOOSTLIBS) $(ROOTLDFLAGS) $(ROOTLIBS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(BOOSTDIR) $(ROOTINC) $(ROOTCFLAGS) -c -o $@ $^

%.o: %.cpp
	$(CXX) $(CFLAGS) $(BOOSTDIR) $(ROOTINC) $(ROOTCFLAGS) -c -o $@ $^

clean:
	rm $(OBJS)
.PHONY: clean