//#include<Stdio.h>
//#include<Stdlib.h>
//#include<string.h>
//#define MAX 100
//
//typedef struct {
//	int *data;
//	int top;
//	int cap;
//}stack;
//
//int init(stack *s)
//{
//	s->cap = 1;
//	s->top = -1;
//	s->data = (int *)malloc(sizeof(int)*s->cap);
//}
//
//int full(stack *s)
//{
//	return (s->top == (s->cap - 1));
//}
//
//int empty(stack *s)
//{
//	return (s->top == -1);
//}
//
//void push(stack *s, char item)
//{
//	if (full(s))
//	{
//			s->cap *= 2;
//			s->data = (int*)realloc(s->data, sizeof(int)*s->cap);
//	}
//
//	s->data[++(s->top)] = item;
//}
//
//int pop(stack *s)
//{
//	if (empty(s))
//		printf("�� ��");
//	return s->data[(s->top)--];
//}
//
//int peek(stack *s)
//{
//	return s->data[s->top];
//}
//
//int main()
//{
//	stack s;
//	int n,k;
//	init(&s);
//	printf("���� �迭��ũ��: ");
//	scanf("%d",&n);
//	printf("������ �Է��Ͻÿ�: ");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		push(&s, k);
//	}
//	printf("\n");
//	printf("������ ���� �迭: ");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&s));
//	}
//}