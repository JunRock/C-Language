//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//ListNode *insert_first(ListNode *head, int value)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = head;
//	head = p;
//	return head;
//}
//
//ListNode *insert(ListNode*head, ListNode*pre, int value)
//{
//	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//	return head;
//}
//
//ListNode *delete_first(ListNode*head)
//{
//	ListNode *removed;
//	removed = head;
//	head = removed->link;
//	free(removed);
//	return head;
//}
//
//ListNode *delete(ListNode*head, ListNode*pre)
//{
//	ListNode *removed;
//	removed = pre->link;
//	pre->link = removed->link;
//	free(removed);
//	return head;
//}
//
//ListNode *search(ListNode*head, int x)
//{
//	ListNode *p = head;
//	while (p != NULL)
//	{
//		if (p->data == x)
//			return x;
//		p = p->link;
//	}
//	return NULL;
//}
//
//ListNode *concat(ListNode* head1, ListNode *head2)
//{
//	if (head1 == NULL) return head2;
//	else if (head2 == NULL) return head1;
//	else
//	{
//		ListNode *p;
//		p = head1;
//		while (p->link!=NULL)
//		{
//			p = p->link;
//		}
//		p->link = head2;
//		return head1;
//	}
//} 
//
//ListNode *reverse(ListNode *head)
//{
//	ListNode *p, *q, *r;
//	p = head;
//	q = NULL;
//	while (p != NULL)
//	{
//		q = r;
//		q = p;
//		p = p->link;
//		q->link = r;
//	}
//
//	return q;
//}
//
//ListNode *search_delete(ListNode* head, int x) //특정부분 노드 삭제
//{
//	ListNode *removed;
//	ListNode*next, *pre;
//	removed = head;
//	pre = NULL;
//	while (removed != NULL)
//	{
//		if (removed->data == x)
//		{
//			next = removed->link;
//			if (pre != NULL)
//			{
//				pre->link = next;
//			}
//			else
//				head =next;
//			free(removed);
//			removed = next;
//		}
//
//		else
//		{
//			pre = removed;
//			removed = removed->link;
//		}
//	}
//	return head;
//}
//
///*ListNode *sort(ListNode*head)
//{
//	ListNode *p = head;
//	ListNode *pre = NULL;
//	ListNode* next;
//	next = p->link;
//
//	while (p!=NULL)
//	{
//		if (pre == NULL)
//		{
//			if (p->data > next->data)
//			{
//				p->link = next->link;
//				next->link = p;
//			}
//			else if (p->data < next->data)
//			{
//				pre = p;
//				p = p->link;
//				next = next->link;
//			}
//		}
//
//		else
//		{
//			if (pre->data > p->data)
//			{
//				pre->link = p->link;
//				p->link = pre->link;
//			}
//			else if (pre->data < p->data)
//			{
//				if (p->data > next->data)
//				{
//					p->link = next->link;
//					next->link = p;
//				}
//				else
//				{
//
//				}
//			}
//		}
//	}
//}*/
//
//ListNode *delete_odd(ListNode *head)
//{
//
//	ListNode *removed=head;
//	ListNode *p;
//	
//	while (removed != NULL)
//	{
//		p = removed;
//		removed = removed->link;
//		if (removed->link == NULL) break;
//		else
//		{
//			p->link = removed->link;
//			removed = removed->link;
//			
//		}
//		
//	}
//	return head;
//}
//
//int max_num(ListNode *head)
//{
//	ListNode *p = head;
//	int as = p->data;
//	while (p != NULL)
//	{
//		if (as < p->data)
//			as = p->data;
//		p = p->link;
//	}
//	return as;
//}
//
//int min_num(ListNode *head)
//{
//	ListNode*p = head;
//	int as = p->data;
//	while (p!=NULL)
//	{
//		if (as > p->data)
//			as = p->data;
//		p = p->link;
//	}
//	return as;
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
//	ListNode*head = NULL;
//	
//		head=insert_first(head, 1);
//		print_list(head);
//		head = insert_first(head, 3);
//		print_list(head);
//		head = insert_first(head, 4);
//		print_list(head);
//		head = insert_first(head, 20);
//		print_list(head);
//		head = insert_first(head, 5);
//		print_list(head);	
//		head = insert_first(head, -5);
//		print_list(head);
//
//	
//
//	if (search(head, 4) != NULL)
//		printf("4을 찾았습니다\n");
//	else
//		printf("찾지 못했습니다.\n");
//	head = delete_odd(head);
//	print_list(head);
//	//head = search_delete(head, 2);
//	//print_list(head);
//	printf("최대값:%d", max_num(head));
//	printf("최소값:%d", min_num(head));
//}