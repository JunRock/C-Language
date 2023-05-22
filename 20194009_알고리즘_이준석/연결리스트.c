/*
	�ۼ���: 2022.09.12
	�ۼ���: ���ؼ�
	���α׷���: ���ľ˰����� �̿��� �л� ���� ���
*/
#include <stdio.h>
#include <stdlib.h> //�����Ҵ��� ����ϱ� ���� stdlib.h ������� ����
#include<string.h>

int count = 0; //���Ͽ� �ִ� �л��� ���� �˱� ���� ���� ����

typedef struct student{ //�л������� ��� �ִ� ����ü
	int hak; //�й��� ��Ÿ���� ����
	char name[20]; //�̸��� ��Ÿ���� ���ڿ�
	int sum; //������ ��Ÿ���� ����
}student;

typedef struct ListNode { //���Ḯ��Ʈ ListNode����ü
	student data; //student ����ü ����
	struct ListNode *link; //ListNode�� ���� ���� ����Ű�� ���Ͽ� ����
} ListNode;

void insert_node(ListNode **phead, ListNode *p, ListNode *new_node) //��忡 ������ �������ִ� �Լ�
{
	if (*phead == NULL) //ù��° �����Ͱ� ���� ���
	{
		new_node->link = NULL; //���ο� ����� link���� NULL�� �ʱ�ȭ
		*phead = new_node; //phead���� new_node�� �ʱ�ȭ
	}

	else //��尡 �����ϴ� ���
	{
		new_node->link = *phead; //new_node�� link�� phead�� ����Ŵ
		*phead = new_node; //phead���� new_node�� �ʱ�ȭ
	}
}

ListNode *create_node(student data, ListNode *link) //��带 �������ִ� �Լ�
{
	ListNode *new_node = (ListNode*)malloc(sizeof(ListNode)); //new_node ���� ���� �� �������� ����

	if (new_node == NULL) //������ ���� �ʾ��� ���
	{
		printf("error");
		exit(1);
	}
	new_node->data = data; //new_node�� data���� ���ڷ� ���� data�� �ʱ�ȭ
	new_node->link = link; //new_node�� link���� ���ڷ� ���� link�� �ʱ�ȭ
	return new_node; //ListNodeŸ������ new_node��ȯ
}

void remove_node(ListNode *head) //���Ḯ��Ʈ ��带 �������ִ� �Լ�
{
	ListNode *p, *next; //�����带 ����Ű�� ���p�� ������带 ����Ű�� next��� ����
	p = head; //p��带 head�� �ʱ�ȭ
	while (p != NULL) //p��尡 NULL�� �ƴҶ� ����
	{
		next = p->link; //p����� link�� next�� ����Ŵ
		free(p); //p��带 ��������
		p = next; //p��忡 next��带 �ʱ�ȭ
	}
}

void display(ListNode *head) // ���ĵ� �л� ������ ������ִ� �Լ�
{
	ListNode* p = head; //�����带 ����Ű�� p��� ���� �� head�� �ʱ�ȭ
	printf("��������������������������������������������������\n"); 
	printf("�� ��    ���� �� �� �� ������\n"); 
	
	while (p != NULL) // p��尡 NULL�� �ƴ� �� ����
	{
		printf("��%5d ��%7s��%5d�� \n", p->data.hak, p->data.name, p->data.sum); // p����� data���� ���
		p = p->link; // p�� ���� ���� �̵�
	}
	printf("��������������������������������������������������\n");
	printf("\n\n");
}

ListNode *bubble_sort(ListNode *head) //�������� �Լ�
{
	ListNode *p, *q, *r = NULL; //p�� ���� ���, q�� ���� ���, r�� �������

	for (int i = 0; i<count; i++) //�л� �� ��ŭ �ݺ�
	{
		p = head; //p�� head�� ����
		for (q=p->link;q!=NULL;q=q->link,p=p->link) //q�� p�� �������� �ʱ�ȭ�� ��, q��p�� ��带 ���� ���� �����ϸ鼭 �ݺ�����
		{
			if (strcmp(p->data.name, q->data.name) > 0) //���� �л��� �� �л����� �� ���� �϶�              
			{	
				if (p == head) //���� ��� ������ �� ��
				{
					//p�� q�� ��ġ�� �ٲٴ� ����            
					head = q; //head���� q�� ����
					p->link = q->link;  //p����� link�� q�� ������带 ����Ŵ
					q->link = p; //q�� link�� p��带 ����Ŵ
					r = q; //�˰����� p, q������ �׻� �پ��ְ� �ϱ� ���� r��忡 q��带 ����
					q = p; //p��带 q�� ����
					p = r; //p��忡 r������ �ϰ� �Ǹ鼭 q, p���̾��� ��带 p, q������ ����
				}
				else //���� ��� ������ �ƴ� ���
				{
					p->link = q->link; //p����� link�� q�� ������带 ����Ŵ
					q->link = p; //q�� link�� p��带 ����Ŵ
					r->link = q; //���� ��� ������ �� ��, r -> q -> p ������ ��
					r = q; //�˰����� p, q������ �׻� �پ��ְ� �ϱ� ���� r��忡 q��带 ����
					q = p; //p��带 q�� ����
					p = r; //p��忡 r������ �ϰ� �Ǹ鼭 q, p���̾��� ��带 p, q������ ����
				}
			}
			r = p; //r�� p�� ����������� ��Ÿ��
		}
	}
	return head; //ListNodeŸ������ head�� ��ȯ
}

ListNode *insertion_sort(ListNode *head) //�������� �Լ�
{
	ListNode *tmp = head; //tmp�� ������ ��� 
	ListNode *p, *next,*pre; // p�� ������, next�� �������, pre�� ������带 �ǹ���
	while (tmp != NULL) // tmp�� NULL�� �ƴ� �� ����
	{
		next = tmp->link; // tmp�� link�� next�� ����Ŵ 
		p = head; // p�� head�� �ʱ�ȭ�ϸ鼭 �� ���� ����Ŵ
		while (p != next) // p��尡 next��带 ������ ������ �ݺ�
		{
			if (p->data.sum < tmp->data.sum) //���� p����� ������ tmp����� �������� ���� ��� 
			{
				tmp->link = p; //tmp��带 p��� ������ ������ ���� tmp�� link�� p�� ����Ŵ
				if (p == head) //p��尡 head�� ��
					head = tmp; //head�� tmp�� �ʱ�ȭ �ϸ鼭 tmp�� head�� ����Ű�� ��
				else
					pre->link = tmp; //p��尡 head�� �ƴ� ��� pre�� link�� tmp�� ����

				while (p->link != tmp) //p����� link�� tmp�� ������ ������ �ݺ�
				{
					p = p->link; //p�� �������� �̵�
				}
				p->link = next; //p����� link�� next�� ����Ű�� ��
			}
			pre = p; //pre�� p�� �ʱ�ȭ
			p = p->link; //p�� ���� ���� �̵�
		}
		tmp = tmp->link; //tmp�� next�� �ʱ�ȭtmp
	}
	return head; //ListNodeŸ������ head�� ��ȯ
}

ListNode *selection_sort(ListNode *head) //�������� ���� �Լ�
{
	ListNode *p = head; //p��带 head�� �ʱ�ȭ, p���� ������
	ListNode *min, *q; //�ּҰ��� ������ �ӽó�� min�� ������带 ����Ű�� q��� ����
	student tmp; //���� �����ϱ� ���� �ӽ�������� ����ü ����
	for (int i = 0; i < count; i++) //�л� �� ��ŭ �ݺ�
	{
		q = p->link; //q��带 p����� ���� ���� �ʱ�ȭ
		min = p; //�� �� ���Ҹ� ���� ���������� �ʱ�ȭ
		for (int j = i + 1; j < count; j++) //�� ���� Ȯ���� �ʿ䰡 �����Ƿ� j�� i+1�� �ʱ�ȭ
		{
			if (q->data.hak < min->data.hak) //���� q�� �й��� min�� �й����� ���� �� 
			{
				min = q; //q��带 min��忡 �ʱ�ȭ
			}
			q = q->link; //q��带 ���� ���� �̵�
		}

		tmp = p->data; //tmp����ü ������ p����� data�� �ʱ�ȭ
		p->data = min->data; //p����� data���� min����� data�� �ʱ�ȭ
		min->data = tmp; //min����� data���� tmp����ü���� �ʱ�ȭ

		p = p->link; //p�� ���� ���� �̵�
	}
	return head; //ListNodeŸ������ head�� ��ȯ
}

void main()
{
	FILE *fp = NULL; //���� ������ ����
	ListNode *list1 = NULL; //list1 ��� ����
	student tmp; //�л������� ��� �ִ� ����ü ���� ����
	fp = fopen("data.txt", "r"); //"data.txt"������ �б���� ���� ����

	if (fp == NULL) //������ �������� ���� ��
	{
		printf("������ ���µ� �����߽��ϴ�.");
		exit(1);
	}

	while (!feof(fp)) //������ ���� ���� �� ����
	{
		fscanf(fp, "%d %s %d", &tmp.hak, tmp.name, &tmp.sum); //���Ͽ��� �й�, �̸�, ������ ����
		insert_node(&list1, NULL, create_node(tmp, NULL)); //insert_node�Լ��� ����
		count++; //���Ͽ� �ִ� �л��� ���� �ľ��ϴ� count���� ���� 1�� ����
	}

	list1 = bubble_sort(list1); //�������� ���
	printf("�̸��� ����(��������)\n");
	display(list1);

	list1 = insertion_sort(list1); //�������� ���
	printf("���� ����(��������)\n");
	display(list1);

	list1 = selection_sort(list1); //�������� ���
	printf("�й� �� ����(��������)\n");
	display(list1);

	remove_node(list1); //�����޸� ����
	fclose(fp); //���������� ����
}