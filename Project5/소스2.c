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
//int prec(char op)//¿¬»êÀÚ ¿ì¼±¼øÀ§ º¯È¯
//{
//	switch (op) {
//	case'(':
//	case')':
//		return 0;
//	case'+':
//	case'-':
//		return 1;
//	case'*':
//	case'/':
//		return 2;
//	}
//	return -1;
//}
//
//void infix_to_postfix(char exp[])
//{
//	Stacktype s;
//	int len = strlen(exp);
//	char ch,top_op;
//	init(&s);
//	for (int i = 0; i < len-1; i++)
//	{
//		ch = exp[i];
//		switch (ch)
//		{
//		case'+':
//		case'-':
//		case'*':
//		case'/':
//			while(!is_empty(&s) && (prec(ch) <= prec(peek(&s))))
//				printf("%c", pop(&s));
//				push(&s, ch);
//			break;
//		case'(':
//			push(&s, ch);
//			break;
//		case')':
//			top_op = pop(&s);
//			while (top_op != '(') {
//				printf("%c", top_op);
//				top_op = pop(&s);
//			}
//			break;
//		default:
//			printf("%c", ch);
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE *fp = fopen("data1.txt", "r");
//	if (fp == NULL)
//	{
//		printf("error");
//			return 0;
//	}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s", &buf);
//		infix_to_postfix(buf);
//		printf("\n");
//	}
//	fclose(fp);
//	return 0;
//}