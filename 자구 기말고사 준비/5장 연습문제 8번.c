//#include<Stdio.h>
//#include<stdlib.h>
//#define MAX 5
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
//	printf("%d %d \n", q->front, q->rear);
//}
//
//void add_rear(Queue *q, element item)
//{
//	if (full(q))
//		printf("포화상태");
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear] = item;
//}
//
//void add_front(Queue *q, element item)
//{
//	if (full(q))
//		printf("포화상태");
//	q->data[q->front] = item;
//	q->front = (q->front - 1 + MAX) % MAX;
//}
//
//element delete_front(Queue *q)
//{
//	if (empty(q))
//		printf("공백상태");
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//element delete_rear(Queue *q)
//{
//	int prev = q->rear;
//	if (empty(q))
//		printf("공백상태");
//	q->rear = (q->rear - 1 + MAX) % MAX;
//	return q->data[prev];
//}
//
//int get_count(Queue *q)
//{
//	int count = q->rear-q->front;
//	return count;
//}
//
//int main()
//{
//	Queue q;
//	init(&q);
//	for (int i = 0; i < 3; i++)
//	{
//		add_rear(&q, i);
//		print_queue(&q);
//	}
//	
//	for (int i = 0; i < 4; i++)
//	{
//		delete_front(&q);
//		print_queue(&q);
//	}
//	printf("%d", get_count(&q));
//}