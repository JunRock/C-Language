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
//ListNode *insert_concat(ListNode *head1, ListNode *head2)
//{
//	ListNode *head3 = (ListNode*)malloc(sizeof(ListNode));
//	ListNode *h1 = head1;
//	ListNode *h2 = head2;
//	//ListNode *h3 = NULL;
//	while (h1 != NULL)
//	{
//		head3->data = h1->data;
//		head3->link = NULL;
//	}
//}
//
//void print_list(ListNode *head)
//{
//	for (ListNode *p = head; p != NULL; p = p->link)
//		printf("%d->", p->data);
//	printf("NULL\n");
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
//		//head = insert_first(head, 60);
//	print_list(head);
//	head = delete1(head);
//	print_list(head);
//	return 0;
//}