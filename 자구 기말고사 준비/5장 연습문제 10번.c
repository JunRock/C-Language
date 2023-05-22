//#include<stdio.h>
//#include<stdlib.h>
//#define max 100
//typedef int element;
//typedef struct {
//	element data[max];
//	int front, rear;
//}queue;
//
//void init(queue *q)
//{
//	q->front = q->rear = 0;
//}
//
//int empty(queue *q)
//{
//	return (q->front == q->rear);
//}
//
//int full(queue *q)
//{
//	return (q->front == (q->rear + 1) % max);
//}
//
//void print_queue(queue *q)
//{
//	printf("%d %d ", q->front, q->rear);
//}
//
//void enqueue(queue *q, element item)
//{
//	if (full(q))
//		printf("포화상태");
//	q->rear = (q->rear + 1) % max;
//	q->data[q->rear]=item;
//}
//
//element dequeue(queue *q)
//{
//	if (empty(q))
//		printf("공백상태");
//	q->front = (q->front + 1) % max;
//	return q->data[q->front];
//}
//
//int fibonachi(queue* q, int n) {
//	if (n == 0) return 0;
//	else if (n == 1) return 1;
//
//	for (int i = 2; i <= n; i++)
//	{
//		int d = dequeue(q);
//		enqueue(q, d + q->data[q->rear]);
//	}
//	return q->data[q->rear];
//}
//
//int main()
//{
//	queue q;
//	init(&q);
//	enqueue(&q, 0);
//	enqueue(&q, 1);
//	int n = 6;
//	printf("%d", fibonachi(&q, n));
//}