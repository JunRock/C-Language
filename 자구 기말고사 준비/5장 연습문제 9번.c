//#include<Stdio.h>
//#include<stdlib.h>
//#define MAX 100
//typedef int element;
//typedef struct {
//	element data[MAX];
//	int top;
//}QueueStack;
//
//void init(QueueStack *q)
//{
//	q->top = -1;
//}
//
//int empty(QueueStack *q)
//{
//	return (q->top==-1);
//}
//
//int full(QueueStack *q)
//{
//	return (q->top == MAX-1);
//}
//
//void push(QueueStack *q, element item)
//{
//	if (full(q))
//	{
//		printf("Æ÷È­»óÅÂ");
//		exit(1);
//	}
//
//	else q->data[++(q->top)] = item;
//}
//
//element pop(QueueStack *q)
//{
//	if (empty(q))
//	{
//		printf("ÅÖºö");
//		exit(1);
//	}
//	else
//		return q->data[(q->top)--];
//}
//
//
//
//int main()
//{
//	QueueStack s1, s2;
//	init(&s1);
//	init(&s2);
//
//	push(&s1, 1);
//	push(&s1, 2);
//	push(&s1, 3);
//
//	if(empty(&s2))
//	{
//		while(!empty(&s1))
//		push(&s2, pop(&s1));
//	}
//
//	printf("%d ", pop(&s2));
//	printf("%d ", pop(&s2));
//	printf("%d ", pop(&s2));
//	return 0;
//}