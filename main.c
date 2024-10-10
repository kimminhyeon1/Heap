#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(void) {
	HeapType* myheap;

	myheap = create_heap();
	init_heap(myheap);

	insert_heap(myheap, (element){ 9 }); insert_heap(myheap, (element) { 4 });
	insert_heap(myheap, (element) { 7 }); insert_heap(myheap, (element) { 15 });
	insert_heap(myheap, (element) { 2 }); insert_heap(myheap, (element) { 8 });
	insert_heap(myheap, (element) { 13 }); insert_heap(myheap, (element) { 6 });
	insert_heap(myheap, (element) { 5 }); insert_heap(myheap, (element) { 11 });

	display_heap(myheap);
	
	for (int i = 0; i < 3; i++) {
		delete_heap(myheap);
	}
	printf("\n");
	display_heap(myheap);

}