//#include<Stdio.h>
//#include<stdlib.h>
//
//#define MAX 5
////typedef  element;
//typedef struct {
//	int data[MAX];
//	int front, rear;
//}Queue;
//
//void error(char *message)
//{
//	printf("error");
//	exit(1);
//}
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
//	return ((q->rear + 1) % MAX == q->front);
//}
//
//void enqueue(Queue *q,element item)
//{
//	if (full(q))
//	{
//		printf("포화상태");
//	}
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear] = item;
//}
//
//void dequeue(Queue*q)
//{
//	if (empty(q))
//		printf("텅빔");
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//typedef struct {
//	int id;
//	int arrtime;
//	int sertime;
//}element;
//
//int main()
//{
//	int minutes = 60;
//	int total = 0;
//	int total_co;
//	int service_time;
//	int serviceco;
//	Queue q;
//	init(&q);
//
//	srand(time(NULL));
//	for (int clock = 0; clock < minutes; clock++)
//	{
//		printf("현재시각=%d\n", clock);
//		if (rand() % 10 < 3)
//		{
//			element co;
//			co.id = total_co++;
//			co.arrtime = clock;
//			co.sertime = rand() % 3 + 1;
//			enqueue(&q, co);
//			printf("고객%d이 %d분에 들어옵니다. 업무 처리 시간=%d분 \n",co.id,co.arrtime,co.sertime);
//		}
//
//		if (service_time > 0)
//		{	
//			printf("고객 %d업무처리중입니다.\n", serviceco);
//			service_time--;
//		}
//
//		else
//		{
//			if()
//		}
//	}
//}