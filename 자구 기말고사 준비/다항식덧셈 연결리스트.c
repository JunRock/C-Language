//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct ListNode {
//	int coef;
//	int expon;
//	struct ListNode *link;
//}ListNode;
//
//typedef struct ListNodeType {
//	ListNode *head;
//	ListNode *tail;
//	int size;
//}ListNodeType;
//
//ListNodeType *create()
//{
//	ListNodeType *plist = (ListNodeType*)malloc(sizeof(ListNodeType));
//	plist->head = plist->tail = NULL;
//	plist->size = 0;
//	return plist;
//}
//
//void insert_last(ListNodeType *p, int coef, int expon)
//{
//	ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
//	if (temp == NULL) error("error");
//
//	temp->coef = coef;
//	temp->expon = expon;
//	temp->link = NULL;
//
//	if (p->tail == NULL)
//		p->head = p->tail = temp;
//	else
//	{
//		p->tail->link = temp;
//		p->tail = temp;
//	}
//	p->size++;
//}
//
