//#include<Stdio.h>
//#include<stdlib.h>
//#define MAX 100
//typedef int element;
//typedef struct {
//	element data[MAX];
//	int front, rear;
//}Queue;
//
//void init(Queue *q)
//{
//	q->front = q->rear = 0;
//}
//
//int empty(Queue *q)
//{
//	return (q->front == q->rear);
//}
//
//int full(Queue *q)
//{
//	return (q->front == (q->rear + 1) % MAX);
//}
//
//void print_queue(Queue *q)
//{
//	printf("%d %d ", q->front, q->rear);
//}
//
//void enqueue(Queue *q, element item)
//{
//	if (full(q))
//		printf("포화상태");
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear]=item;
//}
//
//element dequeue(Queue *q)
//{
//	if (empty(q))
//		printf("공백상태");
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//int main()
//{
//	Queue q;
//	init(&q);
//
//}