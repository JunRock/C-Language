//#include<stdio.h>
//typedef struct {
//	int key;
//	char todolist [100];
//}element;
//
//typedef struct {
//	element heap[100];
//	int heap_size;
//}heaptype;
//
//void insert_max_heap(heaptype *h, element data) {
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
//element delete_max_heap(heaptype *h) {
//	element item, temp;
//	int parent, child;
//	item = h->heap[1];
//	temp = h->heap[(h->heap_size)--];
//	parent = 1;
//	child = 2;
//	while (child <= h->heap_size) {
//		if (child < h->heap_size&&h->heap[child].key < h->heap[child + 1].key)
//			child++;
//		if (temp.key >= h->heap[child].key) break;
//		h->heap[parent] = h->heap[child];
//		parent = child;
//		child *= 2;
//	}
//	h->heap[parent] = temp;
//	return item;
//}
//
//int main() {
//	element data;
//	heaptype h;
//	heaptype tmp;
//	h.heap_size = 0;
//	char ch;
//	while (1) {		
//		switch (ch) {
//		case 'i':
//			getchar();
//			printf("할일:");
//			scanf("%s", data.todolist);
//			printf("우선순위:");
//			scanf("%d", &data.key);
//			insert_max_heap(&h, data);
//			getchar();
//			break;
//
//		case 'd':
//			data=delete_max_heap(&h);
//			printf("제일 우선 순위가 높은 일은 %s\n",data.todolist);
//			getchar();
//			break;
//
//		case 'q':
//			return;
//		}
//
//		
//
//	}
//}