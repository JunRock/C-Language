//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 100
//
//typedef struct {
//	char data[MAX];
//	int top;
//}Stacktype;
//
//void init(Stacktype *s)
//{
//	s->top = -1;
//}
//
//int is_empty(Stacktype *s)
//{
//	return (s->top == -1);
//}
//
//int is_full(Stacktype *s)
//{
//	return (s->top == (MAX - 1));
//}
//
//void push(Stacktype *s, int item)
//{
//	if (is_full(s))
//	{
//		printf("����");
//		return 0;
//	}
//	else
//		return s->data[++(s->top)] = item;
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
//
//int check(char *n)
//{
//	Stacktype s;
//	char ch, open_ch;
//	int count[MAX];
//	int ncount = 0;
//	int j = -1;
//	init(&s);
//	int nx = strlen(n);
//	for (int i = 0; i < nx; i++)
//	{
//		ch = n[i];
//		switch (ch)
//		{
//		case '(':case '[':case'{':
//		{
//			push(&s, ch);
//			++j;
//			count[j] = ++ncount;
//			printf("%d ", count[j]);
//			
//			break;
//		}
//		case ')':case']':case'}':
//			if (is_empty(&s)) return 0;//������ ����ִ��� Ȯ��
//			{
//				open_ch = pop(&s);
//				if ((open_ch == '('&&ch != ')') || (open_ch == '['&&ch != ']') || (open_ch == '{'&&ch != '}'))
//					return 0;
//				printf("%d ", count[j--]);
//				break;
//			}
//
//		}
//
//	}
//	if (is_empty != (&s))//���ÿ� ��ȣ�� �����ִ�
//		return 0;
//
//}
//
//int main()
//{
//	Stacktype s;
//	char line[MAX];
//	printf("����: ");
//	gets_s(line, MAX);
//	printf("��ȣ ��: ");
//	check(line);
//}
