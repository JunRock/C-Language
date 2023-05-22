//#include<stdio.h>
//#include<string.h>
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
//	return(front == rear);
//}
//
//int full()
//{
//	return ((rear + 1) % MAX == front);
//}
//
//void addq(QueueType q)
//{
//	if (full())
//	{
//		printf("포화상태");
//		exit(1);
//	}
//
//	rear = (rear + 1) % MAX;
//	queue[rear].num = q.num;
//	strcpy(queue[rear].name, q.name);
//}
//
//QueueType dequeue()
//{
//	if (empty())
//	{
//		printf("비어있음");
//		exit(1);
//	}
//
//	front = (front + 1) % MAX;
//	return queue[front];
//}
//
//int get_count()
//{
//	return rear - front;
//}
//
//void print_queue()
//{
//	printf("남은요소 : %d\n", get_count());
//}
//
//int main()
//{
//	QueueType q;
//	init();
//	int count = 0;
//	FILE *fp = fopen("data4.txt", "r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d%s", &q.num, &q.name);
//		addq(q);
//		count++;
//	}
//	printf("front: %d  rear: %d\n", front, rear);
//	printf("학번      |   이름\n");
//	for (int i = 0; i < count; i++)
//	{
//		q = dequeue();
//		printf("%d  |  %s\t", q.num, q.name);
//		print_queue();
//	}
//	printf("front: %d  rear: %d", front, rear);
//	fclose(fp);
//	return 0;
//}
//
