//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//void print_list(ListNode *head)
//{
//	ListNode *p;
//	if (head == NULL) return;
//	p = head->link;
//	do
//	{
//		printf("%d->", p->data);
//		p = p->link;
//	} while (p != NULL);
//	printf("%d", p->data);
//}
//
//ListNode* insert_first(ListNode *head, element data)
//{
//	ListNode *newnode = (ListNode*)malloc(sizeof(ListNode));
//	newnode->data = data;
//	if (head == NULL)
//	{
//		head = newnode;
//		newnode->link = head;
//	}
//
//	else
//	{
//		newnode->link = head->link;
//		head->link = newnode;
//	}
//	return head;
//}
//
//ListNode *insert_last(ListNode *head, element data)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	if (head == NULL)
//	{
//		head = p;
//		p->link = head;
//	}
//	else
//	{
//		p->link = head->link;
//		head->link = p;
//		head = p;
//	}
//	return head;
//}
//
