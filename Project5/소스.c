#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#pragma warning (disable:4996)

#define TRUE 1
#define FALSE 0
#define MAX_STACK_SIZE 100

typedef struct {
	char stack[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType *s)
{
	s->top = -1;
}

int is_empty(StackType *s)
{
	return (s->top == -1);
}

int is_full(StackType *s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType *s, char item)
{
	if (is_full(s))
	{
		printf("stack is full\n");
		return;
	}
	else
		s->stack[++(s->top)] = item;
}

char pop(StackType *s)
{
	if (is_empty(s))
	{
		printf("Stack is empty\n");
		return;
	}
	else
		return s->stack[(s->top)--];
}

int check_matching(char *in)
{
	StackType s;
	char ch, open_ch;
	int n = strlen(in);
	init_stack(&s);

	for (int i = 0; i < n; i++) {
		ch = in[i];

		switch (ch) {
		case '(':case '{':case '[':
			push(&s, ch); break;
		case')':case'}':case']':
			if (is_empty(&s)) {
				return FALSE;
			}
			else {
				open_ch = pop(&s);
				if ((open_ch == '(' && ch != ')') ||
					(open_ch == '{' && ch != '}') ||
					(open_ch == '[' && ch != ']'))
					return FALSE;
				break;
			}
		}
	}
	if (is_empty(&s))
		return FALSE;

	return TRUE;
}

int main()
{
	char buf[1024] = { 0 };
	FILE *fp;

	fp = fopen("data.txt", "r");

	if (fp = NULL) {
		printf("file not found.\n");
		return;
	}

	while (!feof(fp))
	{
		fscanf(fp, "%s", buf);
		if (check_matching(buf) == TRUE)
			printf("괄호검사성공 : ");
		else
			printf("괄호검사실패 : ");
		printf("%s\n", buf);

	}
	fclose(fp);
}