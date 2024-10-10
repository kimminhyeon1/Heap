#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

HeapType* create_heap() {
	return (HeapType*)malloc(sizeof(HeapType));
}
void init_heap(HeapType* h) {
	h->heap_size = 0;
}
void destroy_heap(HeapType* h) {
	free(h);
}
int is_empty_heap(HeapType* h) {
	return (h->heap_size == 0);
}
int is_full_heap(HeapType* h) {
	return (h->heap_size == MAX_ELEMENT - 1);
}
void insert_heap(HeapType* h, element item) {
	int i;
	i = ++(h->heap_size);

	while ((i != 1) && (item.key > h->heap[i / 2].key)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}
element delete_heap(HeapType* h) {
	int parent, child;
	element item, temp;

	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];
	parent = 1;
	child = 2;

	while (child <= h->heap_size) {
		if ((child < h->heap_size) && (h->heap[child].key) < h->heap[child + 1].key)
			child++;
		if (temp.key >= h->heap[child].key) break;
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}
element find_heap(HeapType* h) {
	return h->heap[1];
}
void display_heap(HeapType* h) {
	printf(" Heap(%d): ", h->heap_size);
	for (int i = 1; i <= h->heap_size; i++) {
		printf(" {%02d}", h->heap[i].key);
	}
}