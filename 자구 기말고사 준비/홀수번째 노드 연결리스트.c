//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//ListNode *insert_first(ListNode *head, element data)
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
///*ListNode *delete(ListNode *head)
//{
//	ListNode *pre, *p, *removed;
//	int count = 1;
//	if (head == NULL)
//		return NULL;
//	p = head;
//	pre = NULL;
//	removed = p;
//	
//	p = p->link;
//	free(removed);
//	head = p;
//	count++;
//
//	while (p != NULL)
//	{
//		if (count % 2 == 1)
//		{
//			removed = p;
//			p = p->link;
//			pre->link = p;
//			free(removed);
//		}
//		else
//		{
//			pre = p;
//			p=p->link;
//		}
//		count++;
//	}
//	return head;
//}*/
//
///*ListNode *odd_delete(ListNode *head)
//{
//	ListNode *p, *pre=NULL;
//	ListNode *removed;
//	int count = 1;
//	if (head == NULL) return NULL;
//	p = head;
//	removed = p;
//	p = p->link;
//	free(removed);
//	head = p;
//	count++;
//	while (p != NULL)
//	{
//		if (count % 2 == 1)
//		{
//			removed = p;
//			p = p->link;
//			pre->link = p;
//			free(removed);
//		}
//		else
//		{
//			pre = p;
//			p = p->link;
//		}
//		count++;
//	}
//	return head;
//}*/
//
//ListNode *two_delete(ListNode *head)
//{
//	ListNode *p, *pre, *removed;
//	p = head;
//	pre = NULL;
//	int count = 0;
//	count++;
//	while (p != NULL)
//	{
//		if (count % 2 == 0)
//		{
//			removed = p;
//			p = p->link;
//			pre->link = p;
//			free(removed);
//		}
//		else
//		{
//			pre = p;
//			p = p->link;
//		}
//		count++;
//	}
//	return head;
//}
//
//int main()
//{
//	ListNode *head = NULL;
//	head = insert_first(head, 10);
//	head = insert_first(head, 20);
//	head = insert_first(head, 30);
//	head = insert_first(head, 40);
//	head = insert_first(head, 50);
//	//head = insert_first(head, 60);
//	print_list(head);
//	//head = delete1(head);
//	head = two_delete(head);
//	print_list(head);
//	return 0;
//}