//#include<stdio.h>
//#include<stdlib.h>
//#include<String.h>
//
//typedef int element;
//typedef struct Stack {
//	element data;
//	struct Stack *link;
//}Stack;
//
///*typedef struct {
//	Stack *top;
//}Listtype;*/
//
//void init(Stack **top)
//{
//	*top = NULL;
//}
//
//int empty(Stack **top)
//{
//	return (top == NULL);
//}
//
//void print_list(Stack **top)
//{
//	for (Stack *temp = *top; temp != NULL; temp = temp->link)
//		printf("%d->",temp->data);
//	printf("\n");
//}
//
//void push(Stack **top,element data)
//{
//	Stack * new = (Stack*)malloc(sizeof(Stack));
//	if (new == NULL)
//	{
//		printf("메모리 할당 실패");
//	}
//	new->data = data;
//	new->link = *top;
//	*top = new;
//}
//
//element pop(Stack **top)
//{
//	if (empty(top))
//	{
//		fprintf(stderr, "Error");
//		exit(1);
//	}
//	Stack *removed = *top;
//	element data;
//	data = removed->data;
//	*top = (*top)->link;
//	free(removed);
//	return data;
//}
//
//element peek(Stack **top)
//{
//	if (empty(top))
//		printf("error");
//	else
//		return (*top)->data;
//}
//
//int prec(int op)
//{
//	switch (op)
//	{
//	case'(':case')': return 0;
//	case '+': case'-': return 1;
//	case'*':case'/': return 2;
//	default: return NULL;
//	}
//}
//
//void infix_to_postfix(char exp[], char *inpost)
//{
//	Stack *top;
//	int len = strlen(exp);
//	init(&top);
//	char ch, top_op;
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		ch = exp[i];
//		switch (ch)
//		{
//		case '+':case '-': case'*':case'/':
//			while (!empty(&top) && (prec(ch) <= prec(peek(&top))))
//			{
//				inpost[count++] = pop(&top);
//			}
//			push(&top, ch);
//			break;
//
//		case '(':
//			push(&top, ch);
//			break;
//		case')':
//			top_op = pop(&top);
//			inpost[count++] = top_op;
//			break;
//		
//		default:
//			inpost[count++] = ch;
//			break;
//		}
//		while (!empty(&top))
//		{
//			inpost[count++]=pop(&top);
//		}
//	}
//}
//
//int eval(char exp[])
//{
//	Stack *top;
//	int op1, op2;
//	int len = strlen(exp);
//	char ch;
//	int value = 0;
//	init(&top);
//	for (int i = 0; i < len; i++)
//	{
//		ch = exp[i];
//		if (ch != '+'&&ch != '-'&&ch != '*'&&ch != '/')
//		{
//			value = ch - '0';
//			push(&top, value);
//		}
//		else
//		{
//			op2 = pop(&top);
//			op1 = pop(&top);
//			switch (ch)
//			{
//			case'+':
//				push(&top, op1 + op2);
//				break;
//			case'-':
//				push(&top, op1 - op2);
//				break;
//			case'*':
//				push(&top, op1 * op2);
//				break;
//			case'/':
//				push(&top, op1 / op2);
//				break;
//			}
//		}
//	}
//	return pop(&top);
//}
//
//int main()
//{
//	FILE *fp;
//	fp = fopen("data.txt", "r");
//	if (fp == NULL)
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//	char buf[100];
//	char buf4[400];
//	int i = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%c", &buf[i]);
//		i++;
//	}
//	printf("중위표기식:%s", buf);
//	infix_to_postfix(buf, buf4);
//	printf("후위표기식:%s", buf4);
//	return 0;
//}