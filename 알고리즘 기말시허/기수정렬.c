//#include<stdio.h>
//#include<stdlib.h>
//
//#define MAX_QUEUE_SIZE 100
//#define BUCKETS 10
//#define DIGIT 3
//
//typedef int element;
//typedef struct {
//	element queue[MAX_QUEUE_SIZE];
//	int front;
//	int rear;
//}QueueType;
//
//void init(QueueType* q) {
//	q->front = q->rear = 0;
//}
//
//int is_empty(QueueType* q) {
//	return (q->front == q->rear);
//}
//
//int is_full(QueueType* q) {
//	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
//}
//
//void enqueue(QueueType* q, element item) {
//	if (is_full(q)) {
//		printf("포화상태입니다.\n");
//		return;
//	}
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//	q->queue[q->rear] = item;
//}
//
//element dequeue(QueueType* q) {
//	if (is_empty(q)) {
//		printf("공백상태입니다.\n");
//		return;
//	}
//
//	q->front = (q->front+1) % MAX_QUEUE_SIZE;
//	return q->queue[q->front];
//}
//
//void radix_sort(int list[], int n) {
//	QueueType queues[BUCKETS];
//	int factor = 1; //몇번째 자릿수 인지 결정
//	int b, i, d;
//	for (b = 0; b < BUCKETS; b++)
//		init(&queues[b]);
//
//	printf("\n정렬과정\n");
//
//	for (d = 0; d < DIGIT; d++) {
//		printf("\nDigit : %d\n", d + 1);
//		
//		for (i = 0; i < n; i++)
//			enqueue(&queues[(list[i] / factor) % 10], list[i]);
//
//		for (b =i = 0; b < BUCKETS; b++) {
//			printf("BUCKETS[%d] : ", b);
//			if (is_empty(&queues[b]))
//				printf("Empty");
//
//			while (!is_empty(&queues[b])) {
//				list[i] = dequeue(&queues[b]);
//				printf("%d ", list[i++]);
//			}
//			printf("\n");
//		}
//		factor *= 10;;
//	}
//}
//
//void main() {
//	FILE* fp = fopen("data1.txt", "r");
//	int list[MAX_QUEUE_SIZE];
//	int n = 0;
//	if (fp == NULL) {
//		printf("error");
//		return 0;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%d", &list[n]);
//		n++;
//	}
//
//	printf("정렬 전 데이터\n");
//	for (int i = 0; i < n; i++) {
//		printf("%d > ", list[i]);
//	}
//
//	radix_sort(list,n);
//	
//	printf("정렬 후 데이터\n");
//	for (int i = 0; i < n; i++) {
//		printf("%d > ", list[i]);
//	}
//}