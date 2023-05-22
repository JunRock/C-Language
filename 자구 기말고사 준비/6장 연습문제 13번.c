//#include<stdio.h>
//#include<stdlib.h>
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//ListNode *insert_first(ListNode *head,element data)
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
//		printf("%d->", p->data);
//	printf("NULL\n");
//}
//
//ListNode* search_delete(ListNode *head, element data)
//{
//	ListNode *removed=NULL;
//	ListNode *p, *pre=NULL;
//	p = head;
//	while (p != NULL)
//	{
//		if (pre == NULL)
//		{
//			if (p->data == data)
//			{
//				removed = p;
//				p = p->link;
//				head = p;
//				free(removed);
//			}
//			else
//			{
//				pre = p;
//				p = p->link;
//			}
//		}
//		else
//		{
//			if (p->data == data)
//			{
//				removed = p;
//				p = p->link;
//				pre->link = p;
//				free(removed);
//			}
//			else
//			{
//				pre = p;
//				p = p->link;
//			}
//		}
//	}
//	return head;
//}
//
//int main()
//{
//	ListNode *head=NULL;
//
//	head = insert_first(head, 10);
//	head = insert_first(head, 20);
//	head = insert_first(head, 30);
//
//	print_list(head);
//	head = search_delete(head, 30);
//	print_list(head);
//	return 0;
//
//}
