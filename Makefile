CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=basicMath.o power.o
FLAGS= -Wall -g

all:libmyMath.a libmyMath.so mains maind mymaths mymathd
mains: $(OBJECTS_MAIN) libmyMath.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
libmyMath.so : $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
mymaths: libmyMath.a
mymathd:libmyMath.so			
basicMath.o: basicMath.c power.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c 
power.o: power.c basicMath.c myMath.h
	$(CC) $(FLAGS) -c power.c
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind

