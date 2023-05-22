//#include<stdio.h>
//#define MAX 10
//
//int data[MAX];
//int front, rear;
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
//void enqueue(int item)
//{
//	if (full())
//		printf("포화상태");
//	rear = (rear + 1) % MAX;
//	data[rear] = item;
//}
//
//
///*void queue_print()
//{
//	printf("front=%d rear=%d \n", q->front, q->rear);
//}*/
//
//int dequeue()
//{
//	if (empty())
//		printf("공백상태");
//	front = (front + 1) % MAX;
//	return data[front];
//}
//
//int main()
//{
//	FILE *fp = fopen("data1.txt", "r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int tmp;
//	int i = 0;
//	int count = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &tmp);
//		enqueue(tmp);
//		printf("front=%d rear=%d enqueue=%d\n", front, rear, tmp);
//		count++;
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		printf("front=%d rear=%d dequeue=%d\n", front, rear, dequeue());
//	}
//	printf("front=%d rear=%d", front, rear);
//	fclose(fp);
//	return 0;
//}