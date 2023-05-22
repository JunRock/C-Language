#include <stdio.h>
#define MAX_SIZE 100

typedef int element;

typedef struct {
	element array[MAX_SIZE];
	int top;
}StackType;

void init(StackType* s)
{
	s->top = -1;
}

int is_empty(StackType* s)
{
	return (s->top == -1);
}

int is_Full(StackType* s)
{
	return (s->top == (MAX_SIZE-1));
}

void push(StackType* s, element item)
{
	if (is_Full(&s)) return;
	else {
		++s->top;
		s->array[s->top] = item;
	}
}

element pop(StackType* s)
{
	if (is_empty(s)) return;
	// int a = s->array[s->top];
	else {
		return s->array[(s->top--)];
	}
}

element peek(StackType* s)
{
	if (is_empty(s)) return;
	else return s->array[s->top];
}

void main() {
	StackType* s;
	init(&s);

	char arr[MAX_SIZE];

	printf("¼ö½Ä: ");
	scanf("%s", arr);

	printf("°ýÈ£ ¼ö: ");

	int i = 0;
	int count = 1;
	while (arr[i] != NULL) {
		switch (arr[i])
		{
		case '(' :
		case '{':
		case '[':
			push(s, count);
			printf("%d ", count);
			count++;
			i++;
			break;
		case ')':
		case '}':
		case ']':
			printf("%d ", pop(s));
			i++;
			break;
		}
	}
	free(s);
}