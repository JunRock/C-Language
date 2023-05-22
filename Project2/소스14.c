//#include<Stdio.h>
//#include<Stdlib.h>
//#include<string.h>
//#define MAX 100
//
//typedef struct {
//	char *data;
//	char top;
//	char cap;
//}stack;
//
//int init(stack *s)
//{
//	s->cap = 1;
//	s->top = -1;
//	s->data = (char *)malloc(sizeof(char)*s->cap);
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
//		s->cap *= 2;
//		s->data = (char*)realloc(s->data, sizeof(char)*s->cap);
//	}
//
//	s->data[++(s->top)] = item;
//}
//
//char pop(stack *s)
//{
//	if (empty(s))
//		printf("ÅÖ ºö");
//	return s->data[(s->top)--];
//}
//
//int peek(stack *s)
//{
//	return s->data[s->top];
//}
//
//int check(char *in)
//{
//	stack s;
//	char ch, open_ch;
//	int n = strlen(in);
//	init(&s);
//	for (int i = 0; i < n; i++)
//	{
//		ch = in[i];
//		switch (ch)
//		{
//		case '(': case'[': case'{':
//		{
//			push(&s, ch);
//			break;
//		}
//
//		case ')':case']':case'}':
//		{
//			if (empty(&s))
//				return 0;
//			else
//			{
//				open_ch = pop(&s);
//				if ((open_ch == '(' && ch != ')') || (open_ch == '[' && ch != ']') || (open_ch == '{' && ch != '}'))
//					return 0;
//			}
//			break;
//		}
//		}
//	}
//	if (!empty(&s)) return 0;
//	return 1;
//}
//
//int main()
//{
//	char *s = "{A[(i+1)]=0;}}";
//	if (check(s) == 1)
//		printf("°ýÈ£°Ë»ç¼º°ø");
//	else
//		printf("½ÇÆÐ");
//
//}