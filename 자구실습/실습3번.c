#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char element[100];
typedef struct DListNode {
	element name;
	int num;
	int kor;
	int eng;
	int math;
	struct DListNode *llink;
	struct DListNode *rlink;
}DListNode;

void init(DListNode *phead)
{
	phead->llink = phead;
	phead->rlink = phead;
}


void addStudent(DListNode *head)
{
	DListNode *newnode = (DListNode*)malloc(sizeof(DListNode));
	printf("�߰��� �л���ȣ:");
	scanf("%d", &newnode->num);
	printf("�̸�:");
	scanf("%s", &newnode->name);
	printf("���� ����:");
	scanf("%d", &newnode->kor);
	printf("���� ����:");
	scanf("%d", &newnode->eng);
	printf("���� ����:");
	scanf("%d", &newnode->math);
	printf("\n");
	newnode->llink = head->llink;
	newnode->rlink = head;
	head->llink->rlink = newnode;
	head->llink = newnode;
}

void deleteStudent(DListNode *head)
{
	int delete;
	printf("������ �л� ��ȣ:");
	scanf("%d", &delete);
	DListNode *removed=head->rlink;
	while (removed != head)
	{
		if (removed->num == delete)
		{
			removed->llink->rlink = removed->rlink;
			removed->rlink->llink = removed->llink;
			free(removed);
			printf("�����Ǿ����ϴ�.\n\n");
			return;
		}
		removed = removed->rlink;
	}
	printf("ã�� �л��� �����ϴ�.\n\n");
}

void findStudent(DListNode *phead)
{
	int search;
	printf("�˻��� �л� ��ȣ:");
	scanf("%d", &search);
	DListNode *p;
	for (p = phead->rlink; p != phead; p = p->rlink)
	{
		if (p->num == search)
		{
			printf("%d\t%s\t%d\t%d\t%d\n\n", p->num, p->name, p->kor, p->eng, p->math);
			return;
		}
	}
	printf("ã�� �л��� �����ϴ�.\n\n");
}

void printStudent(DListNode *phead)
{
	printf("��ȣ\t�̸�\t����\t����\t����\t������ -1�� ���� ���Է�\n");
	DListNode *p;
	for (p = phead->rlink; p != phead; p = p->rlink)
	{
		printf("%d\t%s\t%d\t%d\t%d\n", p->num, p->name, p->kor, p->eng, p->math);
	}
	printf("\n");
}

int main()
{
	DListNode *head = (DListNode*)malloc(sizeof(DListNode));
	init(head);
	int menu,delete,search;
	int count = 0;
	int num, kor, eng, math;
	char name[100];
	do
	{
		printf("1: �л� ������ �Է� 2: �л� ������ ���� 3: �л� �˻� 4: ��Ϻ���\n");
		printf("�޴��� �Է��ϼ���:");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1:
		{
			addStudent(head);
			break;
		}

		case 2:
		{
			deleteStudent(head);
			break;
		}

		case 3:
		{
			findStudent(head);
			break;
		}

		case 4:
		{
			printStudent(head);
			break;
		}
		default:
		{
			if (menu == 0)
				break;
			printf("�ش� �޴��� �������� �ʽ��ϴ�.\n\n");
		}
		}
	} while (menu != 0);
	printf("���α׷� ����");
	free(head);
	return 0;
}