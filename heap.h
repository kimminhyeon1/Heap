#pragma once
#define MAX_ELEMENT 200
typedef struct {
	int key;
}element;
typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
}HeapType;

extern HeapType* create_heap();
extern void init_heap(HeapType* h);
extern void destroy_heap(HeapType* h);
extern int is_empty_heap(HeapType* h);
extern int is_full_heap(HeapType* h);
extern void insert_heap(HeapType* h, element item);
extern element delete_heap(HeapType* h);
extern element find_heap(HeapType* h);
extern void display_heap(HeapType* h);