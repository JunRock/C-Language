//#include<Stdio.h>
//#define MAX 5
//typedef struct {
//	int front, rear;
//	int data[MAX];
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
//void enqueue(Queue *q, int item)
//{
//	if (full(q))
//	{
//		printf("포화상태");
//		exit(1);
//	}
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear] = item;
//}
//
//int dequeue(Queue *q)
//{
//	if (empty(q))
//	{
//		printf("비어있음");
//		exit(1);
//	}
//
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//void print_queue(Queue*q)//원본을 전달하기 위해서
//{
//	printf("front=%d  rear=%d\n", q->front, q->rear);
//}
//
//int main()
//{
//	Queue q;
//	int x;
//	
//	init(&q);
//	while (!full(&q))
//	{
//		printf("정수입력");
//		scanf("%d", &x);
//		enqueue(&q, x);
//		print_queue(&q);
//	}
//	printf("\n\n");
//	while (!empty(&q))
//	{
//		printf("dequeue()=%d\n", dequeue(&q));
//		print_queue(&q);
//	}
//	return 0;
//}