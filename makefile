my_str: my_str.o utils.o
	gcc -g -ansi -Wall my_str.o utils.o -o my_str

my_str.o: my_str.c
	gcc -c -ansi -Wall my_str.c -o my_str.o

utils.o: utils.c
	gcc -c -ansi -Wall utils.c -o utils.o
