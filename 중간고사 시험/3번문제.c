#include<Stdio.h>
#include<string.h>
#define MAX 100

typedef struct {
	int *data;
	int top;
	int cap;
}stack;

int init(stack *s)
{
	s->cap = 1;
	s->top = -1;
	s->data = (int *)malloc(sizeof(int)*s->cap);
}

int full(stack *s)
{
	return (s->top == (s->cap - 1));
}

int empty(stack *s)
{
	return (s->top == -1);
}

void push(stack *s, char item)
{
	if (full(s))
	{
		s->cap *= 2;
		s->data = (int*)realloc(s->data, sizeof(int)*s->cap);
	}

	s->data[++(s->top)] = item;
}

int pop(stack *s)
{
	if (empty(s))
		printf("텅 빔");
	return s->data[(s->top)--];
}

int peek(stack *s)
{
	return s->data[s->top];
}

int check(char *in)
{
	stack s;
	char ch, opench;
	int len = strlen(in);
	init(&s);

	for (int i = 0; i < len; i++)
	{
		ch = in[i];
		if (ch == ' ' || ch == ',')
			continue;
		ch = tolower(ch);
		push(&s, ch);
	}

	for (int i = 0; i < len; i++)
	{
		ch = in[i];
		if (ch == ' ' || ch == ',')
			continue;
		ch = tolower(ch);
		opench = pop(&s);
		if (ch != opench)
			return 0;
	}
	return 1;
}

int main()
{
	stack s;
	char ch[MAX];
	printf("문자열을 입력하시오:");
	gets(ch);
	int x = check(ch);

	if (x)
		printf("%s는 회문입니다.", ch);
	else
		printf("%s는 회문이 아닙니다.", ch);
	return 0;

}