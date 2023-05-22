//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 100
//typedef struct {
//	int data[MAX];
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
//		printf("²ËÂü");
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
//		printf("ÅÖ ºö");
//		return 0;
//	}
//	else
//		return s->data[(s->top)--];
//}
//
//int peek(Stacktype *s)
//{
//	if (is_empty(s))
//	{
//		printf("ÅÖ ºö");
//		return 0;
//	}
//	else
//		return s->data[(s->top)];
//}
//
//int eval(char exp[])
//{
//	Stacktype s;
//	int len = strlen(exp);
//	char ch;
//	int value;
//	int op1, op2;
//	init(&s);
//
//	for (int i = 0; i < len; i++)
//	{
//		ch = exp[i];
//		if ((ch != '+') && (ch != '-') && (ch != '*') && (ch != '/'))
//		{
//			value = ch - '0';
//			push(&s,value);
//		}
//		else
//		{
//			op2 = pop(&s);
//			op1 = pop(&s);
//			switch (ch)
//			{
//			case '+': 
//				push(&s, op1 + op2); 
//				break;
//			case '-':
//				push(&s, op1 - op2);
//				break;
//			case '*':
//				push(&s, op1 * op2);
//				break;
//			case '/':
//				push(&s, op1 / op2);
//				break;
//			}
//		}
//	}
//	return pop(&s);
//}
//
//int main()
//{
//	char buf[1024] = { 0 };
//	int result = 0;
//	FILE *fp = fopen("data2.txt", "r");
//	if (fp == NULL)
//	{
//		printf("error");
//			return 0;
//	}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s", &buf);
//		printf("ÈÄÀ§Ç¥±â½ÄÀº %s\n", buf);
//		result = eval(buf);
//		printf("°á°ú°ªÀº %d\n", result);
//	}
//	
//	fclose(fp);
//	return 0;
//}