//#include<stdio.h>
//#include<stdlib.h>
// 
//typedef int element;
//typedef struct Stack {
//	element data;
//	struct Stack *link;
//}Stack;
//
//typedef struct {
//	Stack *top;
//}ListType;
//
//void init(ListType *s)
//{
//	s->top = NULL;
//}
//
//int empty(ListType *s)
//{
//	return (s->top == NULL);
//}
//
//void push(ListType *s, element item)
//{
//	Stack *temp = (Stack*)malloc(sizeof(Stack));
//	temp->data = item;
//	temp->link = s->top;
//	s->top = temp;
//}
//
//void print_stack(ListType *s)
//{
//	for (Stack *n = s->top; n != NULL; n = n->link)
//		printf("%d->", n->data);
//	printf("NULL");
//}
//
//element pop(ListType *s)
//{
//	if (empty(s))
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//	Stack *removed;
//	removed = s->top;
//	element data = removed->data;
//	s->top = removed->link;
//	free(removed);
//	return data;
//}
//
//int main()
//{
//	ListType s;
//	init(&s);
//	push(&s, 10);
//	push(&s, 20);
//	push(&s, 30);
//	printf("%d ", pop(&s));
//	printf("%d ", pop(&s));
//	printf("%d ", pop(&s));
//
//}