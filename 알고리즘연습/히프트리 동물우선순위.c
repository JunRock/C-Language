//#include<stdio.h>
//typedef struct {
//	int key;
//	char animal[100];
//}element;
//
//typedef struct {
//	element heap[100];
//	int heap_size;
//}HeapType;
//
//void insert_max_heap(HeapType *h, element data) {
//	int i;
//	i = (++(h->heap_size));
//
//	while (i != 1 && data.key > h->heap[i / 2].key) {
//		h->heap[i] = h->heap[i / 2];
//		i /= 2;
//	}
//	h->heap[i] = data;
//}
//
//void display(HeapType *h) {
//	for (int i = 1; i <= h->heap_size; i++) {
//		printf("%d : %s ->", h->heap[i].key);
//	}
//	printf("\n");
//}
//
//int main() {
//	FILE*fp = fopen("data1.txt", "r");
//	if (fp == NULL) {
//		printf("Error");
//		return;
//	}
//
//	element tmp;
//	HeapType heap;
//	heap.heap_size = 0;
//	
//	while (!feof(fp)) {
//		fscanf(fp, "%d %s", &tmp.key, &tmp.animal);
//		insert_max_heap(&heap, tmp);
//	}
//
//}