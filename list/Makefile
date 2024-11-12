INCLUDE = -I../
CPPFLAGS += $(INCLUDE)

all += 707

707 : 707.o
	g++ $(CPPFLAGS) -o $@ $^

.PHONY : clean
clean :
	rm -f *.o
	rm -f $(all)

.PHONY = clean
