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
//void insert_node(ListNode**phead, ListNode*p, ListNode *new_node)//������� ��������� ����������(pre) ���� �߰��� ������(p)
//{
//	if (*phead == NULL)//���鸮��Ʈ�� ���
//	{
//		new_node->link = NULL;
//		*phead = new_node;
//	}
//
//	else if (p == NULL)//ù��° ���� �߰��ϴ� ���
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
//void remove_node(ListNode**phead, ListNode*p, ListNode *removed)//������� ��������� ���������� ���� �߰��� ������
//{
//
//}
//
//
//ListNode *get_node_at(ListType *list, int pos)//pos��ġ�� ��������͸� ã�Ƽ� ����
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
//int get_length(ListType *list)//���Ḯ��Ʈ ��� ������ ����
//{
//	return list->length;
//}
//
//void add(ListType *list, int position, element data) // list ���Ḯ��Ʈ�� position��ġ�� data�� �߰�
//{
//	ListNode *p;
//	if (position >= 0 && (position <= list->length))
//	{
//		ListNode *node = (ListNode*)malloc(sizeof(ListNode));
//		if (node == NULL)
//		{
//			printf("�޸� �Ҵ� ����\n");
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
//void deleteNode(ListType *list, int position) // list ���Ḯ��Ʈ�� position��ġ�� data�� ����
//{
//
//}
//
//int is_empty(ListType *list)//���Ḯ��Ʈ ���� Ȯ��
//{
//	return 0;
//}
//
//void display(ListType *list)//���Ḯ��Ʈ ���� ���
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
//int is_in_list(ListType *list, element data)//����Ʈ�� ���� �����ϴ��� Ȯ��
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