//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//ListNode *last_insert(ListNode *head, element data)
//{
//	ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
//	temp->data = data;
//	temp->link = NULL;
//	ListNode* p = head;
//	if (head == NULL)
//	{
//		head = temp;
//		head->link = NULL;
//	}
//	else
//	{
//		while (p->link != NULL)
//			p = p->link;
//		p->link = temp;
//		temp->link = NULL;
//	}
//	return head;
//}
//
//void print_list(ListNode *head)
//{
//	ListNode *p = head;
//	while (p != NULL)
//	{
//		printf("%d->", p->data);
//		p = p->link;
//	}
//	printf("NULL\n");
//}
//
//int main()
//{
//	ListNode *head=NULL;
//	//head->link = NULL;
//	head = last_insert(head, 10);
//	head = last_insert(head, 20);
//	head = last_insert(head, 30);
//	print_list(head);
//	return 0;
//}