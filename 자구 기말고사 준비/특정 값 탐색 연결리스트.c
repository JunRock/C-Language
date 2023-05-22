//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//ListNode *first_insert(ListNode *head, element data)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = data;
//	p->link = head;
//	head = p;
//	return head;
//}
//
//void print_list(ListNode *head)
//{
//	for (ListNode *p = head; p != NULL; p = p->link)
//	{
//		printf("%d->", p->data);
//	}
//	printf("NULL\n");
//}
//
//ListNode *search(ListNode *head, element data)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	for (p = head; p != NULL; p = p->link)
//	{
//		if (p->data == data)
//			return p;
//	}
//	return NULL;
//}
//
//int main()
//{
//	FILE *fp;
//	fp = fopen("pra.txt", "r");
//	if (fp == NULL)
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//	int x;
//	ListNode *head = NULL;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &x);
//		head = first_insert(head, x);
//		print_list(head);
//	}
//	if (search(head, 20) != NULL)
//		printf("20을 찾았습니다.");
//	else
//		printf("찾지 못했습니다.");
//	return 0;
//}