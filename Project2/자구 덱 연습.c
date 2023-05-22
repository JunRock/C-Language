//#include<stdio.h>
//#define MAX 5
//
//typedef struct {
//	int front, rear;
//	int data[MAX];
//}Deque;
//
//void init(Deque *q)
//{
//	q->front = q->rear = 0;
//}
//
//int empty(Deque *q)
//{
//	return (q->front == q->rear);
//}
//
//int full(Deque *q)
//{
//	return (q->front == (q->rear + 1) % MAX);
//}
//
//void add_rear(Deque *q, int item)
//{
//	if (full(q))
//		printf("꽉참");
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear] = item;
//}
//
//int delete_front(Deque *q)
//{
//	if (empty(q))
//		printf("비어 있음");
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//void add_front(Deque *q, int item)
//{
//	if (full(q))
//		printf("꽉참");
//	q->front = (q->front - 1 + MAX) % MAX;
//	q->data[q->front] = item;
//}
//
//int delete_rear(Deque *q)
//{
//	if (empty(q))
//		printf("비어 있음");
//	q->rear = (q->rear - 1 + MAX) % MAX;
//	return q->data[q->rear];
//}
//
//void print_de(Deque *q)
//{
//	printf("front =%d  rear=%d\n", q->front, q->rear);
//}
//int main()
//{
//	Deque q;
//	init(&q);
//	for (int i = 0; i < 3; i++)
//	{
//		add_front(&q, i);
//		print_de(&q);
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", delete_rear(&q));
//		print_de(&q);
//	}
//}