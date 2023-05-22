//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int element;
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
//void print_list(ListNode *head)
//{
//	ListNode *p;
//	for (p = head; p->link != NULL; p = p->link)
//		printf("%d->", p->data);
//	printf("%d\n", p->data);
//	//printf("NULL\n");
//}
//
//ListNode *concat(ListNode *head1, ListNode *head2)
//{
//	if (head1 == NULL) return head2;
//	else if (head2 == NULL) return head1;
//
//	else
//	{
//		ListNode *p;
//		p = head1;
//		while (p->link!= NULL)
//			p = p->link;
//		p->link = head2;
//		return head1;
//	}
//}
//
//int main()
//{
//	ListNode *head1 = NULL;
//	ListNode *head2 = NULL;
//	int x;
//	
//		head1 = first_insert(head1, 10);
//		head1 = first_insert(head1, 20);
//		head1 = first_insert(head1, 30);
//		head2 = first_insert(head2, 40);
//		head2 = first_insert(head2, 50);
//		head2 = first_insert(head2, 60);
//		
//	
//	print_list(head1);
//	print_list(head2);
//	ListNode *temp = concat(head1, head2);
//	print_list(temp);
//	return 0;
//}