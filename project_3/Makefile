array: 
	gcc -c my_array.c -o my_array.o

sorting:
	gcc -c my_sorting.c -o my_sorting.o

bubble_main:
	gcc -c main.c -o main.o

exch_main:
	gcc -c exch_main.c -o exch_main.o

bubble: sorting array bubble_main
	gcc my_sorting.o my_array.o main.o -o bubble_sort

exch:   sorting array exch_main
	gcc my_sorting.o my_array.o exch_main.o -o exch_sort

clean:
	rm *.o bubble_sort exch_sort
