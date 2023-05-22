//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int element;
//typedef struct ListNode{
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
//ListNode *insert(ListNode*head, int pos,element data)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = data;
//	p = head;
//	for (int i = 0; i < pos; i++)
//		p = p->link;
//	
//	return head;
//}
//
//ListNode *first_delete(ListNode *head)
//{
//	ListNode *removed;
//	if (head == NULL) return NULL;
//	removed = head;
//	head= removed->link;
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
//		printf("%d ", p->data);
//	printf("NULL\n");
//}
//
//int main()
//{
//	ListNode *head=NULL;
//
//	ListNode *pre = (ListNode*)malloc(sizeof(ListNode));
//	
//	for (int i = 0; i < 4; i++)
//	{
//		head=first_insert(head, i);
//		print_list(head);
//	}
//
//}