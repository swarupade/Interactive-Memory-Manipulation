


project1: main.o help.o free.o write.o generate.o verify.o allocate.o invert.o display.o
	cc  main.o help.o free.o write.o generate.o verify.o allocate.o invert.o display.o -o project1

main.o: main.c main.h
	cc -c  main.c

help.o: help.c help.h
	cc -c help.c

free.o: free.c free.h
	cc -c free.c

write.o: write.c write.h
	cc -c write.c

generate.o: generate.c generate.h
	cc -c generate.c

verify.o: verify.c verify.h
	cc -c verify.c

allocate.o: allocate.c allocate.h
	cc -c allocate.c

invert.o: invert.c invert.h
	cc -c invert.c

display.o: display.c display.h
	cc -c display.c

clean:
	rm project1 main.o help.o free.o write.o generate.o verify.o allocate.o invert.o display.o
