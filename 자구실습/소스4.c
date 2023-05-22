//#include<stdio.h>
//#include<String.h>
//#define MAX 100
//typedef struct {
//	int num;
//	char name[100];
//}QueueType;
//
//int front, rear;
//QueueType queue[MAX];
//
//void init()
//{
//	front = rear = 0;
//}
//
//int empty()
//{
//	return (front == rear);
//}
//
//int full()
//{
//	return ((rear + 1) % MAX == front);
//}
//
//void enqueue(QueueType q)
//{
//	if (full())
//	{
//		printf("포화상태");
//		return 0;
//	}	
//	rear = (rear + 1) % MAX;
//	queue[rear].num=q.num;
//	strcpy(queue[rear].name, q.name);
//}
//
//QueueType dequeue()
//{
//	if (empty())
//		printf("공백상태");
//	front = (front + 1) % MAX;
//	return queue[front];
//}
//
//int get_count()
//{
//	return rear-front;
//}
//
//void print_q()
//{
//	printf("남은 요소:%d\n", get_count());
//}
//
//int main()
//{
//	FILE *fp = fopen("data4.txt", "r");
//	QueueType q;
//	int count = 0;
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int tmp;
//	char ch[100];
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d%s", &q.num ,&q.name);
//		enqueue(q);
//		count++;
//	}
//	printf("front : %d rear : %d\n", front, rear);
//	printf("학번\t\t|이름\n");
//	for (int i = 0; i < count; i++)
//	{
//		q = dequeue();
//		printf("%d\t%s     ",q.num,q.name);
//		print_q();
//	}
//	printf("front : %d rear : %d\n", front, rear);
//}