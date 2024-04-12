output7: main.o
	gcc main.o -o output7 -Wimplicit-function-declaration

main.o: main.c
	gcc -c main.c -Wimplicit-function-declaration

clean:
	rm *.o output7

run:
	make
	./output7

