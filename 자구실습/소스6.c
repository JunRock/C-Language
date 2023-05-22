//#include<Stdio.h>
//#define MAX 100
//
//typedef struct {
//	int front, rear;
//	int queue[MAX];
//}QueueType;
//
//typedef struct {
//	int num;
//	char name[100];
//	QueueType *queue;
//}Student;
//void init(QueueType *q)
//{
//	q->front = q->rear = 0;
//}
//
//int empty(QueueType *q)
//{
//	return (q->front == q->rear);
//}
//
//int full(QueueType *q)
//{
//	return ((q->rear + 1) % MAX == q->front);
//}
//
//void enqueue(QueueType *q,  Student item)
//{
//	if (full(q))
//	{
//		printf("°¡µæÂü");
//		exit(1);
//	}
//	q->rear = (q->rear + 1) % MAX;
//	q->queue[q->rear] ;
//}
//
//int dequeue(QueueType *q)
//{
//	if (empty(q))
//	{
//		printf("ÅÖºö");
//		exit(1);
//	}
//	q->front = (q->front + 1) % MAX;
//	return q->queue[q->front];
//}
//
//void print_queue(QueueType *q)
//{
//	printf("front: %d  rear: %d\n", q->front, q->rear);
//}
//
//int main()
//{
//	QueueType q;
//
//	FILE *fp = fopen("data5.txt", "r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int tmp;
//	int count = 0;
//	int ncount = 1;
//	init(&q);
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &tmp);
//		enqueue(&q, tmp,ncount);
//		count++;
//		ncount++;
//	}
//
//	//print_queue(&q);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d-> ",dequeue(&q));
//	}
//	//print_queue(&q);
//}