//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct {
//	char name[100];
//}element;
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
//ListNode *insert(ListNode*head, ListNode *pre, element data)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = data;
//	p->link = pre->link;
//	pre->link = p;
//	return head;
//}
//
//ListNode *first_delete(ListNode *head)
//{
//	ListNode *removed;
//	if (head == NULL) return NULL;
//	removed = head;
//	head = removed->link;
//	free(removed);
//	return head;
//}
//
//ListNode *delete(ListNode *head, ListNode*pre)
//{
//	ListNode *removed;
//	if (head = NULL) return NULL;
//	removed = pre->link;
//	pre->link = removed->link;
//	free(removed);
//	return head;
//}
//
//void print_list(ListNode *head)
//{
//	for (ListNode *p = head; p != NULL; p = p->link)
//		printf("%s ", p->data.name);
//	printf("NULL\n");
//}
//
//int main()
//{
//	ListNode *head = NULL;
//	element data;
//	FILE *fp;
//
//	fp = fopen("pra.txt", "r");
//	if (fp == NULL)
//	{
//		fprintf(stderr, "¤··ù");
//		exit(1);
//	}
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s", &data.name);
//		head = first_insert(head,data);
//		print_list(head);
//	}
//}