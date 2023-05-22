//#include<stdio.h>
//#include<Stdlib.h>
//
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct Queue *link;
//}ListNode;
//
//ListNode * insert_first(ListNode *head, element data)
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
//void print_list(ListNode *head)
//{
//	ListNode *p;
//	if (head == NULL) return;
//	p = head->link;
//	do
//	{
//		printf("%d->", p->data);
//		p = p->link;
//	} while (p !=head);
//	printf("%d\n", p->data);
//}
//ListNode *search(ListNode *head, element  data)
//{
//	ListNode *s = head;
//	if (head == NULL) return NULL;
//	do
//	{
//		if (s->data == data)
//			return s;
//			s = s->link;
//	} while (s != head);
//	
//		return NULL;
//}
//
//int get_size(ListNode *head)
//{
//	int count = 0;
//	ListNode *p = head;
//	do{
//		count++;
//		p = p->link;
//	} while (p != head);
//	return count;
//}
//
//int main()
//{
//	ListNode *head = NULL;
//	head = insert_first(head, 10);
//	head = insert_first(head, 20);
//	head = insert_first(head, 30);
//	head = insert_first(head, 40);
//	print_list(head);
//	if ((head=search(head, 40)))
//		printf("40을 찾았습니다\n");
//	else
//		printf("error\n");
//	printf("요소 개수:%d", get_size(head));
//	return 0;
//}