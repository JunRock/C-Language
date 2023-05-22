//#include<Stdio.h>
//#include<Stdlib.h>
//#include<string.h>
//#define MAX 100
//
//typedef struct {
//	char *data;
//	int top;
//	int cap;
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
//
//int check(char *in)
//{
//	stack s;
//	int count[MAX];
//	int ncount = 0;
//	int j=0;
//	char ch,open;
//	init(&s);
//	int str = strlen(in);
//	for (int i = 0; i < str; i++)
//	{
//		ch = in[i];
//		switch (ch)
//		{
//		case '(': case'[':case'{':
//			push(&s, ch);
//			//count[++j] = ++ncount;
//			printf("%d ", ++ncount);
//			break;
//
//		case ')': case']':case'}':
//			if (empty(&s)) return 0;
//			else
//			{
//				open = pop(&s);
//				if ((open == '('&&ch != ')') || (open == '['&&ch != ']') || (open == '{'&&ch != '}'))
//					return 0;
//				printf("%d ", ncount--);
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	char line[MAX];
//	printf("¼ö½Ä>>");
//	gets_s(line,MAX);
//	printf("°ýÈ£¼ö>>");
//	check(line);
//	return 0;
//}