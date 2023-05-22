//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct element{
//	char name[100];
//	int num;
//	int kor;
//	int eng;
//	int math;
//}element;
//
//typedef struct DListNode {
//	element data;
//	struct DListNode *llink;
//	struct DListNode *rlink;
//}DListNode;
//
//
//void init(DListNode *head)
//{
//	head->llink = head;
//	head->rlink = head;
//}
//
//DListNode *insert(DListNode *head,element value)
//{
//	DListNode *newnode = (DListNode*)malloc(sizeof(DListNode));
//	strcpy(newnode->data.name, value.name);
//	newnode->data.num = value.num;
//	newnode->data.kor = value.kor;
//	newnode->data.eng = value.eng;
//	newnode->data.math = value.math;
//	newnode->llink = head;
//	newnode->rlink = head->rlink;
//	head->rlink->llink = newnode;
//	head->rlink = newnode;
//	return head;
//}
//
//
//void print_list(DListNode *head)
//{
//	DListNode *p;
//	for (p = head->rlink; p != head; p = p->rlink)
//		printf("%s\t%d\t%d\t%d\t%d\n", p->data.name, p->data.num, p->data.kor, p->data.eng, p->data.math);
//}
//
//void search_student(DListNode *head)
//{
//	DListNode *p;
//	char ch[100];
//	int count = 0;
//	printf("�˻��ϰ� ���� �л��� �̸��� �Է��Ͻÿ�>>");
//	scanf("%s", ch);
//	for (p = head->rlink; p != head; p = p->rlink)
//	{
//		if (strcmp(p->data.name, ch) == 0)
//		{
//			printf("%s\t%d\t%d\t%d\t%d\n", p->data.name, p->data.num, p->data.kor, p->data.eng, p->data.math);
//			count++;
//		}
//	}
//	if (count == 0)
//		printf("�л��� ã�� �� �����ϴ�.\n");
//}
//
//
//void delete(DListNode *head)
//{
//	DListNode *removed=head->rlink;
//	char ch[100];
//	printf("�����ϰ� ���� �л��� �̸��� �˻��Ͻÿ�>>");
//	scanf("%s", ch);
//	while (removed != head)
//	{
//		if (strcmp(removed->data.name, ch) == 0)
//		{
//			removed->llink->rlink = removed->rlink;
//			removed->rlink->llink = removed->llink;
//			free(removed);
//			printf("�����Ǿ����ϴ�.\n");
//			return;
//		}
//		removed = removed->rlink;
//	}
//
//}
//
//int main()
//{
//	int menu;
//	DListNode *head = (DListNode*)malloc(sizeof(DListNode));
//	element data;
//	init(head);
//	FILE *fp;
//	fp = fopen("data1.txt", "r");
//	if (fp == NULL)
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s%d%d%d%d", data.name, &data.num, &data.kor, &data.eng, &data.math);
//		head = insert(head, data);
//	}
//	
//	do{
//	printf("1: �л� ������ �Է� 2: �л� ������ ���� 3: �л� �˻� 4: ��Ϻ���\n");
//	printf("�޴��� �Է��ϼ���:");
//	scanf("%d", &menu);
//	switch (menu)
//	{
//	case 1:
//	{
//		
//		print_list(head);
//		break;
//	}
//
//	case 2:
//	{
//		search_student(head);
//		break;
//	}
//
//	case 3:
//	{
//		delete(head);
//		break;
//	}	
//
//	case 4:
//	{
//		//printStudent(head);
//		break;
//	}
//	default:
//	{
//		if (menu == 0)
//			break;
//		printf("�ش� �޴��� �������� �ʽ��ϴ�.\n\n");
//	}
//	}
//} while (menu != 0);
//}