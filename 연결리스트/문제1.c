#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct {
	element data;
	struct Node *link;
}Node;

Node *insert_fisrt(Node *head, element value)
{
	Node *p = (Node*)malloc(sizeof(Node));
	p->data = value;
	p->link = head;
	head = p;
	return head;
}

Node *insert_last(Node *head, element value)
{
	Node *a = head;
	Node *p = (Node*)malloc(sizeof(Node));
	p->data = value;
	p->link = NULL;
	if (head == NULL)
		head = p;
	else 
	{
		while (a->link != NULL)
			a = a->link;
		a->link = p;
	}
	return head;
}

Node *delete_first(Node *head)
{
	Node *removed;
	if (head == NULL) return NULL;
	removed = head;
	head = removed->link;
	free(removed);
	return head;
}

void Print_list(Node *head)
{
	for (Node *p = head; p != NULL; p = p->link)
	{
		printf("%d->", p->data);
	}
	printf("\n");
}

void delete_list(int count, Node *head)
{
	for (int i = 0; i < count; i++)
	{
		Print_list(head);
		head = delete_first(head);
	}
}

int Count_Node(Node *head)
{
	int count = 0;
	for (Node *p = head; p != NULL; p = p->link)
	{
		count++;
	}
	return count;
}

int Sum_Node(Node *head)
{
	int sum = 0;
	for (Node *p = head; p != NULL; p=p->link)
		sum += p->data;
	return sum;
}

int Search_Node(Node *head, int search)
{
	int count = 0;
	for (Node *p = head; p != NULL; p = p->link)
	{
		if (p->data == search)
			 count++;
	}
	return count;
}

int main()
{
	Node *head=NULL;
	int x,num;
	printf("노드의 개수:");
	scanf("%d", &x);
	printf("\n");
	for (int i = 0; i < x; i++)
	{
		printf("노드 #%d 데이터:",i);
		scanf("%d", &num);
		printf("\n");
		head=insert_last(head, num);
	}

	printf("생성된 연결 리스트: ");
	Print_list(head);
	printf("\n");
	printf("연결 리스트 노드의 개수: %d\n\n", Count_Node(head));
	printf("연결 리스트의 데이터 합:%d\n\n", Sum_Node(head));
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &num);
	Search_Node(head, num);
	printf("%d는 연결리스트에서 %d번 나타납니다.\n", num, Search_Node(head, num));
	delete_list(x, head);
}