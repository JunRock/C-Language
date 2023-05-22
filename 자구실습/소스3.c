//#include<stdio.h>
//#include<stdlib.h>
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
//void enqueue(int item,int count)
//{
//	if (full())
//	{
//		printf("포화상태");
//		return 0;
//	}
//	int i;
//	for (i = count-1; i > 0; i--)
//	{
//		if (item < data[i])
//			data[i + 1] = data[i];
//		else
//			break;
//	}
//	data[i + 1] = item;
//	rear = (rear + 1) % MAX;
//}
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
//	FILE *fp=fopen("data2.txt","r");
//	int tmp;
//	int i = 0;
//	int count = 1;
//
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &tmp);
//		enqueue(tmp,count);
//		count++;
//	}
//
//	for (i = 1; i < count; i++)
//	{
//		printf("%d ->", dequeue());
//	}
//
//	fclose(fp);
//	return 0;
//}