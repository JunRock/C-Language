//#include<Stdio.h>
//#include<stdlib.h>
//#define MAX 100
//
//typedef struct
//{
//	int data[MAX];
//	int top;
//}Stacktype;
//
//void init(Stacktype *s)
//{
//	s->top = -1;
//}
//int is_empty(Stacktype *s)
//{
//	return(s->top == -1);
//}
//
//int is_full(Stacktype *s)
//{
//	return (s->top == (MAX - 1));
//}
//
//void push(Stacktype *s,int item)
//{
//	if (is_full(s))
//	{
//		printf("�� ��");
//		return 0;
//	}
//
//	else
//		s->data[++(s->top)] = item;
//}
//
//int pop(Stacktype *s)
//{
//	if (is_empty(s))
//	{
//		printf("�� ��");
//		return 0;
//	}
//	else
//		return s->data[(s->top)--];
//}
//int main()
//{
//	Stacktype s;
//	init(&s);
//	int x;
//	int array[MAX];
//	printf("���� �迭�� ũ��: ");
//	scanf("%d", &x);
//	printf("������ �Է��Ͻÿ�");
//	for (int i = 0; i < x; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//	for (int i = 0; i < x; i++)
//	{
//		push(&s, array[i]);
//	}
//
//	for (int i = 0; i < x; i++)
//		printf("%d ", pop(&s));
//}