CC=gcc
CXX=g++

INCLUDE = -I../
CPPFLAGS += $(INCLUDE)

all += 707

707.wxx : 707.o
	g++ $(CPPFLAGS) -o 707 707.o 

clean :
	rm -f *.o
	rm -f $(all)

.PHONY = clean
