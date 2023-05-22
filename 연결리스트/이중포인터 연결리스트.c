//#include<Stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//typedef int element;
//typedef struct ListNode {
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//typedef struct {
//	ListNode *head;
//	int length;
//}ListType;
//
//void init(ListType *list)
//{
//	list->length = 0;
//	list->head = NULL;	
//}
//
//void insert_node(ListNode**phead, ListNode*p, ListNode *new_node)//순서대로 헤드포인터 현재포인터(pre) 새로 추가될 포인터(p)
//{
//	if (*phead == NULL)//공백리스트인 경우
//	{
//		new_node->link = NULL;
//		*phead = new_node;
//	}
//
//	else if (p == NULL)//첫번째 노드로 추가하는 경우
//	{
//		new_node->link = *phead;
//		*phead = new_node;
//	}
//
//	else
//	{
//		new_node->link = p->link;
//		p->link = new_node;
//	}
//}
//
//void remove_node(ListNode**phead, ListNode*p, ListNode *removed)//순서대로 헤드포인터 현재포인터 새로 추가될 포인터
//{
//
//}
//
//
//ListNode *get_node_at(ListType *list, int pos)//pos위치의 노드포인터를 찾아서 리턴
//{
//	ListNode *tmp_node = list->head;
//	if (pos < 0)
//		return NULL;
//
//	for (int i = 0; i < pos; i++)
//		tmp_node = tmp_node->link;
//
//	return tmp_node;
//}
//
//int get_length(ListType *list)//연결리스트 노드 개수를 리턴
//{
//	return list->length;
//}
//
//void add(ListType *list, int position, element data) // list 연결리스트의 position위치에 data를 추가
//{
//	ListNode *p;
//	if (position >= 0 && (position <= list->length))
//	{
//		ListNode *node = (ListNode*)malloc(sizeof(ListNode));
//		if (node == NULL)
//		{
//			printf("메모리 할당 오류\n");
//			return;
//		}
//
//		node->data = data;
//		p = get_node_at(list, position-1);
//
//		insert_node(&(list->head), p, node);
//		list->length++;
//	}
//}
//
//void add_last(ListType* list, element data)
//{
//	add(list, get_length(list), data);
//}
//
//void add_first(ListType* list, element data)
//{
//	add(list, 0, data);
//}
//
//void deleteNode(ListType *list, int position) // list 연결리스트의 position위치에 data를 삭제
//{
//
//}
//
//int is_empty(ListType *list)//연결리스트 공백 확인
//{
//	return 0;
//}
//
//void display(ListType *list)//연결리스트 내용 출력
//{
//	for (ListNode *p = list->head; p != NULL; p = p->link)
//		printf("%d ->", p->data);
//}
//
//void clear(ListType *list)
//{
//
//}
//
//int is_in_list(ListType *list, element data)//리스트에 값이 존재하는지 확인
//{
//	return 0;
//}
//
//element get_entry(ListType *list, int pos)
//{
//	return 0;
//}
//
//int main()
//{
//	ListType list;
//	int tmp;
//	init(&list);
//
//	FILE *fp=fopen("data.txt","r");
//	if (fp == NULL) {
//		printf("error");
//		return;
//		}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &tmp);
//		add_last(&list, tmp);
//	}
//	fclose(fp);
//	display(&list);
//	clear(&list);
//}