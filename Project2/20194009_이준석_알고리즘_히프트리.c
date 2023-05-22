//#include <stdio.h>
//#pragma warning(disable:4996)
//
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
//void insert_max_heap(HeapType* h, element data) {
//	int i; 
//	i = (++h->heap_size);
//
//	while ((i != 1) && data.key > h->heap[i / 2].key) {
//		h->heap[i] = h->heap[i / 2];
//		i /= 2;
//	}
//	h->heap[i] = data;
//}
//void display(HeapType* h) {
//	for (int i = 1; i <= h->heap_size; i++) {
//		printf("%d : %s -> ", h->heap[i].key, h->heap[i].animal);
//	}
//	printf("\n");
//}
//void main() {
//	FILE* fp;
//	fp = fopen("data.txt", "r");
//	element tmp;
//	HeapType heap;
//	heap.heap_size = 0;
//	if (fp == NULL) {
//		fprintf(stderr, "파일 열기 실패\n");
//		exit(1);
//	}
//	while (!feof(fp)) {
//		fscanf(fp, "%d %s", &tmp.key, &tmp.animal);
//		printf("%d %s\n", tmp.key, tmp.animal);
//		insert_max_heap(&heap, tmp);
//	}
//	display(&heap);
//}