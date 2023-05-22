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
//}Listtype;
//
//void init(Listtype *s)
//{
//	s->top = NULL;
//}
//
//int empty(Listtype *s)
//{
//	return (s->top == NULL);
//}
//
//void print_list(Listtype *s)
//{
//	for (Stack *temp = s->top; temp != NULL; temp = temp->link)
//		printf("%d->",temp->data);
//	printf("\n");
//}
//
//void push(Listtype *s,element data)
//{
//	Stack * new = (Stack*)malloc(sizeof(Stack));
//	if (new == NULL)
//	{
//		printf("메모리 할당 실패");
//	}
//	new->data = data;
//	new->link = s->top;
//	s->top = new;
//}
//
//element pop(Listtype *s)
//{
//	Stack *removed = (Stack*)malloc(sizeof(Stack));
//	element data;
//	if (empty(s))
//	{
//		fprintf(stderr, "Error");
//		exit(1);
//	}
//
//	removed = s->top;
//	data = removed->data;
//	s->top = s->top->link;
//	free(removed);
//	return data;
//}
//
//int main()
//{
//	Stack head;
//	init(&head);
//	FILE *fp;
//	fp = fopen("data.txt", "r");
//	if (fp == NULL)
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//
//	int temp;
//	int count = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &temp);
//		push(&head, temp);
//		print_list(&head);
//		count++;
//	}
//	printf("push end\n");
//	for (int i = 0; i < count; i++)
//	{
//		pop(&head);
//		print_list(&head);
//	}
//	return 0;
//}