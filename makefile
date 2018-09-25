


project1: main.o help.o free.o write.o generate.o verify.o allocate.o invert.o display.o
	gcc -Wall  main.o help.o free.o write.o generate.o verify.o allocate.o invert.o display.o -o project1

main.o: main.c main.h
	gcc -Wall -c  main.c

help.o: help.c help.h
	gcc -Wall -c help.c

free.o: free.c free.h
	gcc -Wall -c free.c

write.o: write.c write.h
	gcc -Wall -c write.c

generate.o: generate.c generate.h
	gcc -Wall -c generate.c

verify.o: verify.c verify.h
	gcc -Wall -c verify.c

allocate.o: allocate.c allocate.h
	gcc -Wall -c allocate.c

invert.o: invert.c invert.h
	gcc -Wall -c invert.c

display.o: display.c display.h
	gcc -Wall -c display.c

clean:
	rm project1 main.o help.o free.o write.o generate.o verify.o allocate.o invert.o display.o
