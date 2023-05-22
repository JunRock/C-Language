//#include<Stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 100
//
//typedef char element;
//typedef struct {
//	element data[MAX];
//	int top;
//}Stack;
//
//void init(Stack *s)
//{
//	s->top = -1;
//}
//
//int empty(Stack *s)
//{
//	return (s->top == -1);
//}
//
//int full(Stack *s)
//{
//	return (s->top == (MAX - 1));
//}
//
//void push(Stack *s, element item)
//{
//	if (full(s))
//	{
//		fprintf(stderr, "error");
//		return 0;
//	}
//
//	else
//		s->data[++(s->top)] = item;
//}
//
//element peek(Stack *s)
//{
//	if (empty(s))
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//	else
//		return s->data[s->top];
//}
//
//element pop(Stack *s)
//{
//	if (empty(s))
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//	else
//		return s->data[(s->top)--];
//}
//
//int prec(char op)  //우선순위 연산자
//{
//	switch (op)
//	{
//	case '(': case')':return 0;
//	case'+':case'-': return 1;
//	case'*':case'/':case'%': return 2;
//	}
//	return -1;
//}
//
//void infix_to_postfix(char exp[])
//{
//	int i = 0;
//	char ch, top_op;
//	int len = strlen(exp);
//	Stack s;
//	init(&s);
//	for (i = 0; i < len; i++)
//	{
//		ch = exp[i];
//		switch (ch)
//		{
//		case '+':case'-':case'*':case'/':case'%':
//			while (!empty(&s) && (prec(ch) <= prec(peek(&s))))
//				printf("%c", pop(&s));
//			push(&s, ch);
//			break;
//		case'(':
//			push(&s, ch);
//			break;
//		case')':
//			top_op = pop(&s);
//			while (top_op != '(')
//			{
//				printf("%c", top_op);
//				top_op = pop(&s);
//			}
//			break;
//		default:
//			printf("%c", ch);
//			break;
//		}
//	}
//	while (!empty(&s))
//	{
//		printf("%c", pop(&s));
//	}
//}
//
//int main()
//{
//	char *s = "5*(10+2)%2";
//	printf("중위 표기식:%s\n", s);
//	printf("후위 표기식:");
//	infix_to_postfix(s);
//	printf("\n");
//	return 0;
//}