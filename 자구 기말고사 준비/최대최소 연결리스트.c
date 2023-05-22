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
//int checkmax(ListNode *head)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p = head;
//	int max = p->data;
//	while (p != NULL)
//	{
//		if (max < p->data)
//			max = p->data;
//		p = p->link;
//	}
//	return max;
//}
//
//int checkmin(ListNode *head)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p = head;
//	int min = p->data;
//	while (p != NULL)
//	{
//		if (min > p->data)
//			min = p->data;
//		p = p->link;
//	}
//	return min;
//}
//
//int main()
//{
//	ListNode *head = NULL;
//	
//		head = insert_first(head, 10);
//		head = insert_first(head, 20);
//		head = insert_first(head, 30);
//	
//		print_list(head);
//		printf("최대값은 %d\n", checkmax(head));
//		printf("최소값은 %d", checkmin(head));
//		return 0;
//}